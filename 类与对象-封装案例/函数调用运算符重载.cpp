//#include<iostream>
//using namespace std;
//#include<string>
//class myprint {
//public:
//	void operator()(string text) {
//		cout << text << endl;
//	}
//};
//void test1() {
//	//重载（）操作符也称为仿函数
//	myprint myfunc;
//	myfunc("hello world");
//}
//class myadd {
//public:
//	int operator()(int v1, int v2) {
//		return v1 + v2;
//	}
//};
//void test2() {
//	myadd add;
//	int ret =add(10, 10);
//	cout << "ret=" << ret << endl;
//	//匿名函数调用
//	cout << "myadd()(100,100)=" << myadd()(100, 100) << endl;
//}
//int main() {
//	test1();
//	test2();
//	return 0;
//}