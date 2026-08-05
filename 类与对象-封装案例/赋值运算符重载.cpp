//#include<iostream>
//using namespace std;
//class person {
//public:
//	person(int age) {
//		m_a = new int(age);
//	}
//	person& operator=(person&p) {
//		//避免内存泄漏，如果之前创建的堆区内存未释放，会导致新赋值的区域出现错误
//		if (m_a != NULL) {
//			delete m_a;
//			m_a = NULL;
//		}
//		//编译器提供的代码是浅拷贝
//		//m_a=p.m_a;
//		//这一部分使用 new int(...) 动态分配一块新的内存，并将 *p.m_a 的值（即 p.m_a 所指向的 int 值）复制到新分配的内存中。
//		m_a = new int(*p.m_a);
//		// this 指向：被赋值的对象（左边的对象）
//		// &p   指向：源对象（右边的对象）
//		return *this;
//	}
//	~person() {
//		if (m_a != NULL) {
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	int* m_a;
//};
//void test1() {
//	person p1(10);
//	person p2(20);
//	person p3(30);
//	p1 = p2 = p3;
//	cout << "p1年龄" << *p1.m_a<<endl;
//	cout << "p2年龄" << *p2.m_a<<endl;
//	cout << "p3年龄" << *p3.m_a<<endl;
//}
//int main() {
//	test1();
//	return 0;
//}