//#include<iostream>
//using namespace std;
//#include<string>
//class person {
//public:
//	person(string name,int age) {
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(person& p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(person& p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return false;
//		}
//		return true;
//	}
//	string m_name;
//	int m_age;
//};
//void test1() {
//	person p1("tom",18);
//	person p2("tom", 18);
//	if (p1 == p2) {
//		cout << "相等" << endl;
//	}
//	else {
//		cout << "不相等" << endl;
//	}
//}
//int main() {
//	test1();
//	return 0;
//}