//#include<iostream>
//using namespace std;
//#include<string>
////使用多态创造计算器
////抽象计算机类
////多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
//class abstractcalculator {
//public:
//	virtual int getresult() {
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//class addcalculator :public abstractcalculator {
//	int getresult(){
//
//			return m_num1 + m_num2;
//
//	}
//};
//class subcalculator :public abstractcalculator {
//	int getresult() {
//
//
//			return m_num1 - m_num2;
//
//	}
//};
//class pluscalculator :public abstractcalculator {
//	int getresult() {
//
//			return m_num1 * m_num2;
//
//	}
//};
//class dividecalculator :public abstractcalculator {
//	int getresult() {
//
//			return m_num1 /m_num2;
//
//	}
//};
//void test1() {
//	//父类指针或引用指向子类对象
//	abstractcalculator* abs = new addcalculator;
//	abs->m_num1 = 10;
//	abs->m_num2 = 10;
//	cout << abs->getresult() << endl;
//	delete abs;
//	abs = new subcalculator;
//	abs->m_num1 = 10;
//	abs->m_num2 = 10;
//	cout << abs->getresult() << endl;
//	delete abs;
//	abs = new pluscalculator;
//	abs->m_num1 = 10;
//	abs->m_num2 = 10;
//	cout << abs->getresult() << endl;
//	delete abs;
//	abs = new dividecalculator;
//	abs->m_num1 = 10;
//	abs->m_num2 = 10;
//	cout << abs->getresult() << endl;
//	delete abs;
//}
//int main() {
//	test1();
//	return 0;
//}