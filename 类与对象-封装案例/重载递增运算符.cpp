//#include<iostream>
//using namespace std;
//class myint {
//	friend ostream& operator<<(ostream& cout, myint m_int);
//public:
//	myint() {
//		m_num = 0;
//	}
//	//前置++
//	myint& operator++() {//这里使用&是为了不创建一个新的临时变量，使所有操作都对一个元素生效
//		//先++
//		m_num++;
//		//再返回
//		return *this;
//	}
//	//后置++
//	myint operator++(int) {//这里不使用&是因为返回的是函数内的变量，函数执行完后函数会销毁，再返回临时变量的地址会报错
//		//先返回
//		myint temp = *this;//记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++
//		m_num++;
//		return temp;
//
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
//	cout << m_int++ << endl;
//	cout << m_int << endl;
//}
//void test2() {
//	myint m_int;
//	myint();
//	cout <<++m_int<< endl;
//	cout << m_int << endl;
//}
//int main() {
//	test1();
//	test2();
//	return 0;
//}