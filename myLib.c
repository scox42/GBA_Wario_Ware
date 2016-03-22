//Sarah Cox (902958147)

#include "myLib.h"
#include "font.h"

u16 __key_curr = 0, __key_prev = 0;
//DMA_CONTROLLER *dma = (DMA_CONTROLLER *)0x40000B0;

unsigned short *videoBuffer = (unsigned short *)0x6000000;

void setPixel(int row, int col, u16 color)
{
	videoBuffer[OFFSET(row, col, 240)] = color;
}

void drawChar(int row, int col, char ch, u16 color){
	int r,c;
	for(r=0; r<8; r++){
		for(c=0; c<6; c++){
			if(fontdata_6x8[OFFSET(r,c,6) + 48*ch]){
				setPixel(r + row, c + col, color);
			}	
		}
	}
}

void drawString(int row, int col, char *str, u16 color) {
	int chars_drawn = 0;
	while(*str){
		drawChar(row, col + 6*chars_drawn++, *str++, color);
	}
}

void waitForVblank() {
	while(SCANLINE_COUNTER > 160);
	while(SCANLINE_COUNTER < 160);
}

void drawImage3(int x, int y, int width, int height, const u16* image) {
    for(int r = 0; r < height; r++) {
		DMA[3].src = &image[OFFSET(r, 0, width)];
		DMA[3].dst = &videoBuffer[OFFSET(y+r, x, 240)];
		DMA[3].cnt = width | DMA_ON;
	}
}

void drawRect(int x, int y, int width, int height, u16 color) {
	for(int r = 0; r < height; r++) {
		DMA[3].src = &color;
		DMA[3].dst = &videoBuffer[OFFSET(y + r, x, 240)];
		DMA[3].cnt = width | DMA_ON | DMA_SOURCE_FIXED;
	}
}

void drawRectNoDMA(int row, int col, int height, int width, unsigned short color) {
	int r,c;
	for(r=0; r<height; r++) {
		for(c=0; c<width; c++) {
			setPixel(row+r, col+c, color);
		}
	}
}

void fillScreen(volatile u16 color) {
	DMA[3].src = &color;
	DMA[3].dst = videoBuffer;
	DMA[3].cnt = 38400 | DMA_ON | DMA_SOURCE_FIXED;
}

int delay(int n) {
	volatile int x = 0;
	for (int i = 0; i < n; i++) {
		x++;
	}
	return x;
}

void fillScreenNoDMA(u16 color) {
	int r = 0;
	int c = 0;
	for(r = 0; r < 160; r++) {
		for(c = 0; c < 240; c++) {
			setPixel(r, c, color);
		}
	}
}

void drawImageNoDMA(int x, int y, int width, int height, const u16* image) {
	int r = 0;
	int c = 0;
	int i = 0;
	for(r = 0; r < 160; r++) {
		for(c = 0; c < 240; c++) {
			setPixel(r, c, image[i]);
			i++;
		}
	}
}

void drawImagePortionRows(int x, int y, int width, int height, const u16* image) {
	for(int r = 0; r < height; r++) {
		DMA[3].src = &image[OFFSET(r, 0, width)];
		DMA[3].dst = &videoBuffer[OFFSET(y+r, x, 240)];
		DMA[3].cnt = (width/2) | DMA_ON;
	}
}

void drawImageControlWH(int row, int col, int width, int height, const u16* image) {
	int i = 0;
	for (int r = 0; r < 160; r++) {
		for (int c = 0; c < 240; c++) {
			if (c <= (row + width) && c >= row
				&& r<=(col + height) && r>= col) {
				setPixel(r, c, image[i]);
			}	
			i++;
		}
	}
}

void drawImage3WH(int row, int col, int width, int height, const u16* image) {
    for(int r = col; r < (col + height); r++) {
			DMA[3].src = &image[OFFSET(r, row, 240)];
			DMA[3].dst = &videoBuffer[OFFSET(r, row, 240)];
			DMA[3].cnt = width | DMA_ON;	
	}
}

void drawImage3Backwards(int x, int y, int width, int height, const u16* image) {
    for(int r = 0; r < height; r++) {
		DMA[3].src = &image[OFFSET(r, 0, width)];
		DMA[3].dst = &videoBuffer[OFFSET(y+r, x, 240)];
		DMA[3].cnt = width | DMA_ON | DMA_SOURCE_DECREMENT;
	}
}

void drawImage3Sideways(int row, int col, int width, int height, const u16* image) {
	int i = 0;
	for (int r = 0; r < 160; r++) {
		for (int c = 0; c < 240; c++) {
			if (c <= (row + width) && c >= row
				&& r<=(col + height) && r>= col) {
				setPixel(c, r, image[i]);
			}	
			i++;
		}
	}
}

//DMA_SOURCE_INCREMENT -- (Default) Draws from the next pixel
//DMA_SOURCE_DECREMENT -- Last array of source, and go backwards
//DMA_SOURCE_FIXED -- You draw from the pixel over and over again
//DMA_DESTINATION_INCREMENT (Default) Draws to the next pixel
//DMA_DESTINATION_DECREMENT -- Same as source decrement
//DMA_DESTINATION_FIXED -- You are drawing TO the same pixel over and over again
//DMA_ON -- ALWAYS DO THAT

//DMA_32 -- Copy 2 at a time (width * (height/2))
//DMA_16 -- (Default)