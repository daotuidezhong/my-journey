//#include<iostream>
//using namespace std;
//class person {
//public:
//	static int m_a;//静态成员变量
//
//	//静态成员变量特点
//	//1、在编译阶段分配内存
//	//2、类内声明，类外初始化
//	//3、所有对象共享同一份数据
//private:
//	static int m_b;
//};
//int person::m_a = 10;
//int person::m_b = 20;
//void test1() {
//	//静态成员变量两种访问方式
//
//	//1、通过对象
//	person p1;
//	p1.m_a = 100;
//	cout << "p1.m_a=" << p1.m_a << endl;
//
//	person p2;
//	p2.m_a = 200;
//	cout << "p1.m_a=" << p1.m_a << endl;
//	cout << "p2.m_a=" << p1.m_a << endl;
//
//
//	//通过类名
//	cout << "m_a=" << person::m_a << endl;
//	//cout << "m_b=" << person::m_b << endl;  //私有权限访问不到
//}
//int main() {
//	test1();
//	return 0;
//}