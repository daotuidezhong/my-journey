//#include<iostream>
//using namespace std;
////重载左移运算符配合友元可以实现输出自定义数据类型
//class person {
//	friend ostream& operator<<(ostream& out, person& p);//用友元使其能访问内部成员
//public:
//	person(int a, int b) {
//		m_a = a;
//		m_b = b;
//	}
//	//成员函数 实现不了 p<<cout不是我们想要的结果
//	//void operatora<<(person &p){}
//	
//private:
//	int m_a;
//	int m_b;
//};
////全局函数实现左移重载
////ostream对象只能有一个，所以要用引用传入输入的内容
//ostream& operator<<(ostream& out, person& p) {
//	out << "a:" << p.m_a << "b:" << p.m_b;
//	return out;
//}
//void test1() {
//	person p1(10, 20);
//	cout << p1 << "hello world" << endl;//链式编程
//}
//int main() {
//	test1();
//	return 0;
//}