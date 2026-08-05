//#include<iostream>
//using namespace std;
////1.构造函数分类分为  有参和无参构造   无参又称为默认函数构造
////按照类型分类分为 普通构造和拷贝构造
//
//class person {
//public:
//	//无参（默认）构造函数
//	person() {
//		cout << "无参构造函数" << endl;
//	}
//	//有参构造函数
//	person(int a) {
//		age = a;
//		cout << "有参构造函数" << endl;
//	}
//	//拷贝构造函数
//	person(const person& p) {    //const
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//	~person() {
//		cout << "析构函数的构造" << endl;
//	}
//	int age;
//};
//void test1() {
//	person p;
//}
//
////调用有参的构造函数
//void test2() {
//	//1.括号法（常用）
//	person p1(10);
//	//注意：调用无参构造函数不能加括号，如果加了编译器会认为这是一个函数声明
//	//错误：person p2();
//
//	//显式法
//	person p2 = person(10);
//	person p3 = person(p2);
//
//	//隐式转换法
//	person p4 = 10;//person p4 =person(10);
//	person p5 = p4;//person p5=person(p4);
//
//	//注意：不能利用 拷贝构造函数初始化匿名对象 编译器认为是对象声明
//	//错误：person (p4);
//}
//
//
//int main() {
//	test1();
//	test2();
//	return 0;
//}