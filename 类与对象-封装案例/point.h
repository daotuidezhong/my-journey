#pragma once
#include<iostream>
using namespace std;
class point {
public:
	//设置x
	void setx(int x);
	//获取x
	int getx();
	//设置x
	void sety(int y);
	//获取y
	int gety();
private:
	int my_x;
	int my_y;
};