//#include<iostream>
//using namespace std;
//class myint {
//	friend ostream& operator<<(ostream& cout, myint m_int);
//public:
//	myint() {
//		m_num = 1;
//	}
//	//实现前--
//	myint& operator--() {
//		m_num--;
//		return *this;
//	}
//	//实现后--
//	myint operator--(int) {
//		myint temp = *this;
//		m_num--;
//		return temp;
//	}
//private:
//	int m_num;
//};
//ostream& operator<<(ostream& cout, myint m_int) {
//	cout << m_int.m_num;
//	return cout;
//}
//void test1() {
//	myint m_int;
//	myint();
//	cout << m_int-- << endl;
//	cout << m_int << endl;
//}
//void test2() {
//	myint m_int;
//	myint();
//	cout << --m_int << endl;
//	cout << m_int << endl;
//}
//
//int main() {
//	test1();
//	test2();
//	return 0;
//}