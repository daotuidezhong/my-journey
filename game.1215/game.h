#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROW1 ROW+2
#define COL1 COL+2
#define easy_version 10
#define mid_version 20
#define hard_version 30
void initboard(char arr[ROW1][COL1], int r, int c, char set);
void printboard(char arr[ROW1][COL1], int r, int c);
void placemine(char arr[ROW1][COL1], int r, int c);
void checkmine(char arr[ROW1][COL1], char arr1[ROW1][COL1], int r, int c);
int countmine(char arr[ROW][COL], int x, int y);
