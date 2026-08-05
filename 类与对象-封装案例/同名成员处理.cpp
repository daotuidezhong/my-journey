//#include<iostream>
//using namespace std;
////子类对象可以直接访问到子类中同名成员
////子类对象加作用域可以访问到父类同类成员
//class base {
//public:
//	base() {
//		m_a = 100;
//	}
//	void func() {
//		cout << "base-func()" << endl;
//		 }
//	void func(int a) {
//		cout << "base-func(int a)" << endl;
//	}
//public:
//	int m_a;
//};
//class son :public base {
//public:
//	son() {
//		m_a = 200;
//	}
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	void func() {
//		cout << "son-func()" << endl;
//	}
//public:
//	int m_a;
//};
//void test1() {
//	son s;
//	cout << "son 下的m_a" << s.m_a << endl;
//	cout << "base下的m_a" << s.base::m_a << endl;
//	s.func();
//	s.base::func();
//	s.base::func(100);
//}
//
//int main() {
//	test1();
//	return 0;
//}