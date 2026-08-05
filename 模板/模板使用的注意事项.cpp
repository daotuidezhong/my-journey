//#include<iostream>
//using namespace std;
////使用模板的时候必须确定出通用数据类型T，而且能够推导出一致的类型
//template<typename T>
//void swap1(T &a,T&b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
////1.自动类型推导，必须推导出一致的数据类型T，才可以使用
//void test1() {
//	int a = 10;
//	int b = 20;
//	char c = 'a';
//	swap1(a, b);//正确，可以推导出一致的T
//	//swap1(a, c);//错误推导不出一致的T类型
//}
//template <typename T>
//void func() {
//	cout << "func调用" << endl;
//}
//void test2() {
//	//func()//错误，模板不能独立使用，必须确定出T类型
//	func<int>();
//}
//int main() {
//	test1();
//	test2();
//	return 0;
//}