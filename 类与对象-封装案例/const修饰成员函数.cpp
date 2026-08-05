//#include<iostream>
//using namespace std;
//class person {
//public:
//	//常函数
//	//静态成员函数没有this指针
//	//this指针的本质  是指针常量  指针的指向是不可以修改的
//	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//	void showperson() const{
//		//this->m_a = 100;
//		this->m_b = 100;
//		//this=NULL; //this指针不可以修改指针的指向的
//	}
//	void func() {
//
//	}
//	int m_a;
//	mutable int m_b;//特殊函数 ，即使在常函数中，也可以修改这个值，加关键字mutable
//};
//void test1() {
//	person p;
//	p.showperson();
//}
////常对象
//void test2() {
//	const person p1;//
//	//p1.m_a = 100;
//	//常对象只能调用常函数
//	p1.m_b = 100;//m_b是特殊值，在常对象下也可以修改
//	//p1.func();//常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
//}
//int main() {
//	return 0;
//}