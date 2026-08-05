//#include<iostream>
//using namespace std;
////菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
//class animal {
//public:
//	int m_age;
//};
////继承前加virtual关键字后，变成虚继承
////此时公共的父类animal称为虚基类
////底层原理是系统生成了vbptr指针，经过偏移后两个指针指向同一个m_age
//class sheep:virtual public animal{};
//class tuo:virtual public animal{};
//class sheeptuo :public sheep,public tuo{};
//void test1() {
//	sheeptuo st;
//	st.sheep::m_age = 28;
//	st.tuo::m_age = 18;
//	cout << "st.sheep::m_age=" << st.sheep::m_age << endl;
//	cout << "st.tuo::m_age=" << st.tuo::m_age << endl;
//	cout << "st.sheep::m_age=" << st.m_age << endl;
//}
//int main() {
//	test1();
//	return 0;
//}