//#include<iostream>
//using namespace std;
////同名静态成员函数处理方式和非静态处理方式一样，只不过有两种访问方式（通过对象和通过类名）
//class base {
//public:
//	static void func() {
//		cout << "base-static-void func()" << endl;
//	}
//	static void func(int a) {
//		cout << "base-static-void func(int a)" << endl;
//	}
//	static int m_a;
//};
//int base::m_a = 100;
//class son:public base {
//public:
//	static void func() {
//		cout << "son-static- void func()" << endl;
//	}
//	static int m_a;
//};
//int son::m_a = 200;
////同名成员属性
//void test1() {
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	son s;
//	cout << "son 下 m_a=" << s.m_a << endl;
//	cout << "base 下 m_a=" << s.base::m_a << endl;
//}
////同名成员函数
//void test2() {
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	son s;
//	s.func();
//	s.base::func();
//
//	cout << "通过类名访问" << endl;
//	son::func();
//	son::base::func();
//	//出现同名 子类会隐藏掉父类中所有同名成员函数，需要加作用域访问
//	son::base::func(100);
//}
//int main() {
//	test1();
//	test2();
//	return 0;
//}