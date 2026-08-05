#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char arr[ROW1][COL1], int r, int c, char set) {
	int i = 0,j=0;
	for (i = 0; i < r; i++) {
		for ( j = 0; j < c; j++) {
			arr[i][j] = set;
		}
	}
}
void printboard(char arr[ROW1][COL1], int r, int c) {
	for (int i = 0; i <= r; i++) {
		printf("%3d ", i);
	}
	printf("\n");
	for (int i =1; i <= r; i++) {
		printf("%3d ", i);
		for (int j = 1; j <= c; j++){
			printf("%3c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void placemine(char arr[ROW1][COL1],int r,int c) {
	int count = easy_version;
	while (count) {
		int x = rand() %r + 1;
		int y = rand() %c + 1;
		if (arr[x][y] == '0') {
			arr[x][y] = '1';
			count--;
		}
	}
}

int countmine(char arr[ROW1][COL1],int x,int y) {
	int cnt = 0;
	cnt = (arr[x - 1][y - 1] + arr[x - 1][y] + arr[x - 1][y + 1] + arr[x][y + 1] + arr[x + 1][y + 1] + arr[x + 1][y] + arr[x + 1][y - 1] + arr[x][y - 1])-8*'0';
	return cnt;
}



void checkmine(char arr[ROW1][COL1],char arr1[ROW1][COL1], int r, int c) {
	int x, y;
	int win = 0;
	while (1) {
		printf("请输入你要排查的坐标\n");
		scanf("%d,%d", &x, &y);
		if (x < 0 || x>9 || y < 0 || y>9) {
			printf("输入坐标超过了棋盘大小\n");
			continue;
		}
		else if (arr[x][y] != '*') {
			printf("该坐标已排查过，请重新输入\n");
			continue;
		}
		
		else if (arr1[x][y] == '1') {
			printf("你被炸死了哈哈哈哈，请看死亡回放\n");
			printboard(arr1, ROW, COL);
			break;
		}
		else {
			int cnt = countmine(arr1, x, y);
			cnt = cnt + '0';
			arr[x][y] = cnt;
			win++;
			printboard(arr, ROW, COL);
			if (win == r * c - easy_version){
				printf("恭喜你！排完所有雷，游戏胜利！\n");
				printboard(arr1, ROW, COL);
				break;
			}
		}

	}
}