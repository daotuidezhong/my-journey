//#include<iostream>
//using namespace std;
////静态成员函数特点
////1、程序共享一个函数
////2、静态成员函数只能访问静态成员变量
//class person {
//public:
//	static void func() {
//		cout << "func调用" << endl;
//		m_a = 100;
//		//m_b = 100; //不可以访问非静态成员函数
//	}
//	static int m_a;
//	int m_b;
//private:
//	static void func2() {
//		cout << "func2调用" << endl;
//	}
//};
//int person::m_a = 10;
//
//void test1() {
//	//静态成员函数两种访问方式
//
//	//1、通过对象
//	person p1;
//	p1.func();
//
//	//2. 通过类名
//	person::func();
//
//	//person::func2()  //私有权限访问不到
//}
//int main() {
//	test1();
//	return 0;
//}