//Sarah Cox (902958147)

#include "myLib.h"
#include "title.h"
#include <stdio.h>
#include <stdlib.h>
#include "warioWins.h"
#include "youWin.h"
#include "warioWare.h"
#include "fP.h"

MOVOBJ cake[3];

MOVOBJ fp = {10, 120, 0, 0, 25, WHITE};	


void makeCake() {
	int i;
	for(i = 0; i < 3; i++) {
	    cake[i].row = rand() % 80 + 50;
	    cake[i].col = rand() % 80 + 50;
	    cake[i].rd = 0;
	    cake[i].cd = 0;
	    cake[i].size = 8;
	    cake[i].color = WHITE;
	}
}	

int count = 0;
char buffer[41];
int score = 0;

void titleScreen() {
	makeCake(); 
	drawImage3(0,0,240,160,title);
	//setPixel(5, 30, WHITE);
}

int playLevel2() {
	drawImage3(fp.row, fp.col, fp.size, fp.size, fP);
	sprintf(buffer, "Score: %d", score);
	drawString(10, 10, buffer, WHITE);
	for (int i = 0; i < 3; i++) {
		if (cake[i].rd != 1) {
			if (fp.row <= cake[i].row + cake[i].size && cake[i].row <= fp.row + fp.size
				&& fp.col <= cake[i].col + cake[i].size && cake[i].col <= fp.col + fp.size) {
				cake[i].rd = 1;
				drawRect(50, 10, 10, 10, BLACK);
				drawRect(cake[i].row, cake[i].col, cake[i].size, cake[i].size, BLACK);
				score++;
			}
			drawRect(cake[i].row, cake[i].col, cake[i].size, cake[i].size, cake[i].color);
		}	
	}
	if (KEY_DOWN_NOW(BUTTON_UP)) {
		fp.col--;
		drawRect(fp.row, fp.col + fp.size, fp.size, 1, BLACK);
	} else if (KEY_DOWN_NOW(BUTTON_DOWN)) {
		fp.col++;
		drawRect(fp.row, fp.col - 1, fp.size, 1, BLACK);
	} else if (KEY_DOWN_NOW(BUTTON_LEFT)) {
		fp.row--;
		drawRect(fp.row + fp.size, fp.col, 1, fp.size, BLACK);
	} else if (KEY_DOWN_NOW(BUTTON_RIGHT)) {
		fp.row++;
		drawRect(fp.row - 1, fp.col, 1, fp.size, BLACK);
	}
	if (score == 3) {
		score = 0;
		fp.row = 10;
		fp.col = 120;
		return 1;
	}
	return 3;
}

// void drawBalloon(MOVOBJ ballon) {
// 	drawRect(ballon.row, ballon.col, ballon.rd, ballon.cd, ballon.size, RED);
// 	ballon.row = 120;
// 	ballon
// }
// int level1(int pressed) {
// 	int count = 0;
// 	// player.row = 100;
// 	// player.col = 110;
// 	// player.rd = 5;
// 	// player.cd = 0;
// 	// player.a = 1;
// 	// player.size = 10;
// 	// player.color = RED;
// 	// drawPlayer();
// 	if (KEY_DOWN_NOW(BUTTON_A)) {
// 		pressed = 1;
// 	}
// 	if (~KEY_DOWN_NOW(BUTTON_A)) {
// 		pressed = 2;
// 	}
// 	drawString(80,80, "Press A 7 Times!", RED);

// 	if (count;
// }

void gameOver() {
	drawImage3(0, 0, 240, 160, warioWins);
}

void winScreen() {
	drawImage3(0, 0, 240, 160, youWin);
}
//static void drawPlayer() {
	// if (KEY_DOWN_NOW(KEY_LEFT)) {
	// 	player.x -= player.dx;
	// } else if (KEY_DOWN_NOW(KEY_RIGHT)) {
	// 	player.x += player.dx;
	// }
	// if (player.dy <= 5) {
	// 	player.dy = player.dy + player.a;
	// 	player.y = player.y + player.dy;
	// } else {
	// player.y = player.y + player.dy;
	// }
	// drawRect(player.x, player.y, player.size, player.size, player.color);
//}