#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle {
public:
	//设置半径值
	void setr(int r);
	//获取半径值
	int getr();
	//设置圆心值
	void setp(point center);
	//获取圆心值
	point getp();
private:
	int my_r;
	point pointer;
};