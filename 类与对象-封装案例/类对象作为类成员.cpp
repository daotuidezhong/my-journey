//#include<iostream>
//using namespace std;
//#include<string>
//class phone {
//public:
//	phone(string name) {
//		m_phonename = name;
//		cout << "phone构造" << endl;
//	}
//	~phone() {
//		cout << "phone析构" << endl;
//	}
//
//	string m_phonename;
//};
//class person {
//public:
//	//m_phone(pname) 相当于phone m_phone = pname，phone类中有可以接受string类型的构造函数 ，
//	// 对象的初始化用初始化列表而不是直接赋值 隐式转换法
//	person(string name, string pname):m_name(name),m_phone(pname)
//	{
//		cout << "person构造" << endl;
//	}
//	~person() {
//		cout << "person析构" << endl;
//	}
//	void playgame() {
//		cout << m_name << "使用" << m_phone.m_phonename << "牌手机" << endl;
//	}
//	string m_name;
//	phone m_phone;
//};
//void test1() {
//	//但类中成员是其他类对象是，我们称该成员为  对象成员
//	//构造的顺序是：先调用成员对象的构造  ，再调用本类构造
//	//析构顺序于构造顺序相反，因为在栈上，先进后出，相当于装机要先装零件后装机壳，拆机时要先拆机壳后拆零件
//	person p("张三", "苹果100");
//	p.playgame();
//}
//int main() {
//	test1();
//	return 0;
//}