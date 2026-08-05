//#include<iostream>
//using namespace std;
//#include<string>
//class building;
//class goodgay {
//public:
//	~goodgay() {
//		delete m_building;
//	}
//	goodgay();
//	void visit();
//private:
//	building* m_building;
//	
//};
//class building {
//	//告诉编译器 函数visit函数是building类的好朋友，可以访问到building类中私有内容
//	friend void goodgay::visit();
//	//告诉编译器 goodguy类是building类的好朋友，可以访问到building类中私有内容
//	friend class goodgay;
//public:
//	building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//building::building() {
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//goodgay::goodgay() {
//	m_building = new building;
//}
//void goodgay::visit() {
//	cout << "好基友正在访问" << m_building->m_sittingroom << endl;
//	cout << "好基友正在访问" << m_building->m_bedroom << endl;
//}
//void test1() {
//	goodgay gg;
//	gg.visit();
//}
//int main() {
//	test1();
//	return 0;
//}