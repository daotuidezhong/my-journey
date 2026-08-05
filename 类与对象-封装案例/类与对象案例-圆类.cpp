//#include<iostream>
//using namespace std;
//#include"circle.h"  //分装到不同的头文件，使这个文件的容量不是太大
//#include"point.h"	   //分装到不同的头文件，使这个文件的容量不是太大
//void judge(circle &c,point &p) {
//	int distance=(c.getp().getx() - p.getx())* (c.getp().getx() - p.getx()) +
//		(c.getp().gety() - p.gety()) * (c.getp().gety() - p.gety());
//	int rdistance = c.getr() * c.getr();
//	if (distance == rdistance) {
//		cout << "该点在圆上" << endl;
//	}
//	else if (distance < rdistance) {
//		cout << "该点在圆内" << endl;
//	}
//	else {
//		cout << "该点在圆外" << endl;
//	}
//}
//int main() {
//	//创建圆
//	circle c;
//	c.setr(10);
//	point center;
//	center.setx(10);
//	center.sety(0);
//	c.setp(center);
//	//创建点
//	point p;
//	p.setx(9);
//	p.sety(10);
//	judge(c, p);
//	return 0;
//}