//#include<iostream>
//#include<string>
//using namespace std;
//class building {
//	//告诉编译器  girlfriend全局函数  是 building类的好朋友，可以访问类中的私有内容
//	friend void girlfriend(building b);
//public:
//	building() {
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//void girlfriend(building b) {
//	cout << "你的女朋友正在访问" << b.m_sittingroom << endl;
//	cout << "你的女朋友正在访问" << b.m_bedroom << endl;
//}
//int main() {
//	building b;
//	girlfriend(b);
//	return 0;
//}