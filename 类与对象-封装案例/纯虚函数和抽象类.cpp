//#include<iostream>
//using namespace std;
////纯虚函数和抽象类
//class base {
//public:
//	//纯虚函数
//	//只要有一个纯虚函数，这个类称为抽象类
//	//抽象类特点：
//	//1、无法实例化对象
//	//2、抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//class son :public base {
//public:
//	void func() {
//		cout << "func函数调用" << endl;
//	}
//};
//void test1() {
//	//base b;//抽象类是无法实例化的对象
//	//new base；//抽象类是无法实例化的对象、
//	base* base = new son;
//	base->func();
//	delete base;
//}
//int main() {
//	test1();
//	return 0;
//}