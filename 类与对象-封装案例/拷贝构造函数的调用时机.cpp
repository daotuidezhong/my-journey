//#include<iostream>
//using namespace std;
//
////默认情况下，c++编译器至少给一个类添加3个函数
//
////1、默认构造函数无参，函数体为空
////2、默认析构函数无参，函数体为空
////3、默认拷贝构造函数，对属性进行值拷贝
//
////构造函数调用规则如下
////1、如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造
////2、如果用户定义拷贝构造函数，c++不再提供其他构造函数
//class person {
//public:
//	person() {
//		cout << "person默认函数调用" << endl;
//	}
//	~person() {
//		cout << "person构造函数调用" << endl;
//	}
//
//	person(int age) {
//		m_age = age;
//		cout << "person有参构造函数的调用" << endl;
//	}
//	person(const person& p) {
//		cout << "person拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//	}
//	int m_age;
//};
////拷贝构造函数调用时机
//
////1.使用一个已经创建完成的对象来初始化一个新对象
//void test1() {
//	person p1(10);
//	person p2(p1);
//}
////2.值传递的方式给函数参数传值
//void dowork(person p) {
//
//}
//void test2() {
//	person p;
//	dowork(p);
//}
////3.值方式返回局部对象
//person dowork2() {
//	person p1;
//	return p1;//这里也调用了拷贝函数
//}
//void test3() {
//	person p = dowork2();
//
//}
//
//int main() {
//	/*test1();
//	test2();*/
//	test3();
//	return 0;
//}


















