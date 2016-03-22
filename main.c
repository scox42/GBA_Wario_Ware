//Sarah Cox (902958147)

#include "myLib.h"
#include <stdio.h>
#include <stdlib.h>
#include "title.h"
#include "warioWare.h"

int main()
{
	REG_DISPCTL = MODE3 | BG2_ENABLE;
	int scene = 0;
	int frameCounter = 0;
	int timer = 0;
	int winCondition = 0;
	int pressed = 0;
	int pressedLF = 0;
	int next = 0;
	//int timeBuffer[41];
	//int d = 0;
	//int count = 0;
	MOVOBJ ballon = {80, 60, 0, 0, 10, RED};

	while(1) // game loop
	{
		waitForVblank();
		frameCounter++;
		pressedLF = 0;
		if (KEY_DOWN_NOW(BUTTON_SELECT)) {
			fillScreen(BLACK);
			scene = 0;
			ballon.size = 10;
		}

		if (scene == 0) {
			titleScreen();
			drawString(145, 50, "Press <ENTER> to Start", RED);
			if (KEY_DOWN_NOW(BUTTON_START)) {
				scene = 1;
				timer = 1;
				fillScreen(BLACK);
			}
		}
		if (scene == 1) {
			drawRect(ballon.row, ballon.col, ballon.size, ballon.size, RED);
			drawString(130,80, "Press A!!!", RED);
			drawString(20, 50, "Blow up the balloon!", RED);

			if (timer % 3 == 0) {
				if (winCondition == 0) {
					scene = 500;
					fillScreen(BLACK);
					gameOver();
					timer = 1;
					winCondition = 0;
				}
			}
			if (KEY_DOWN_NOW(BUTTON_A) && pressedLF == 0) {
				ballon.size = ballon.size + 1;
				pressedLF = 1;
			}
			if (ballon.size == 50) {
				winCondition = 0;
				scene = 700;
				fillScreen(BLACK);
				scene = 2;
			}
		}

		if (scene == 2) {
			drawString(10, 80, "Eat the cake!", WHITE);
			if (timer == 2) {
				//drawCake();
			}
			next = playLevel2();
			if (timer % 4 == 0) {
				if (winCondition == 0) {
					scene = 500;
					drawRect(0,0,240, 160, BLACK);
					gameOver();
					timer = 1;
				}
			}
			if (next == 1) {
				scene = 700;
				fillScreen(BLACK);
				winScreen();
			}
		}
		if (scene == 500) {
			//gameOver();
			drawString(145, 50, "Better Luck Next Time!", RED);
			pressed = 0;
		}
		if (scene == 700) {
			drawString(30, 50, "Fine! You beat me...", RED);
			pressed = 0;
		}
		if (frameCounter % 160 == 0) {
			timer++;
		}
	}
}

