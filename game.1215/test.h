#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"//扫雷游戏
void menu() {
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
}
void game() {
	char mine[ROW1][COL1] = { 0 };
	char show[ROW1][COL1] = { 0 };
	//初始化棋盘
	initboard(mine, ROW1, COL1, '0');
	initboard(show, ROW1, COL1, '*');
	//打印棋盘
	printboard(show,ROW,COL);
	//布置雷
	placemine(mine,ROW,COL);//问题一：布雷错误
	//排查雷
	checkmine(show,mine,ROW,COL);
	//计算雷
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入数字");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
		
	
}