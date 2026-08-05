//#include<iostream>
//using namespace std;
//template<typename T>
////函数模板利用关键字 temple
////使用函数模板有两种方式：自动类型推导、显示指定类型
////模板的目的是为了提高服用性，将类型参数化
//void swaptype(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test() {
//	
//	int a = 10;
//	int b = 20;
//	double c = 2.2;
//	double d = 1.1;
//	//1.自动类型推导
//	swaptype(a, b);
//	cout << "a= " << a << "b= " << b << endl;
//	//2.显示指定类型
//	swaptype<double>(c, d);
//	cout << "c= " << c << "d= " << d << endl;
//}
//int main() {
//	test();
//	return 0;
//}