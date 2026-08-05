//#include<iostream>
//using namespace std;
////对于内置的数据类型的表达式的运算符不可能改变
////不要滥用运算符重载（不要把加法的重载写成减法）
//class person {
//public:
//	person() {
//
//	}
//	person(int a, int b) {
//		m_a = a;
//		m_b = b;
//	}
//	//成员函数实现  +  号运算符重载
//	person operator+(person& p) {
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//public:
//	int m_a;
//	int m_b;
//};
////全局函数实现 + 号运算符重载
////person operator+(person& p1, person& p2) {
////	person temp;
////	temp.m_a = p1.m_a + p2.m_a;
////	temp.m_b = p1.m_b + p2.m_b;
////	return temp;
////}
//
////运算符重载 可以发生函数重载
//person operator+(person& p, int val) {
//	person temp;
//	temp.m_a = p.m_a + val;
//	temp.m_b = p.m_b + val;
//	return temp;
//}
//void test1() {
//	person p1(10, 10);
//	person p2(20, 20);
//	//成员函数方式
//	person p3 = p2 + p1;
//	cout << "ma:" << p3.m_a << "mb:" << p3.m_b << endl;
//
//	person p4 = p3 + 10;
//	cout << "ma:" << p3.m_a << "mb:" << p4.m_b << endl;
//}
//int main() {
//	test1();
//
//	return 0;
//}