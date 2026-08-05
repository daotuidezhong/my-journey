//#include<iostream>
//using namespace std;
//#include<string>
////多态使用是，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//
////1、解决方法：将父类中的析构函数改为 虚析构或者纯虚析构
////可以解决父类指针释放子类对象
////都需要有具体的函数实现
////2、虚析构和纯虚析构的区别
////如果是纯虚析构，该类属于抽象类，无法实例化对象
//
//class animal {
//public:
//	animal() {
//		cout << "animal构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//	//析构函数加上virtual关键字，变陈虚析构函数 
//	//virtual ~animal()
//	//{
//	//cout<<"animal虚析构函数调用"<<endl;
//	//}
//
//	//纯虚析构
//	virtual ~animal() = 0;
//};
//animal:: ~animal() {
//	cout << "animal纯虚析构函数调用" << endl;
//}
//class cat :public animal {
//public:
//	cat(string name) {
//		cout << "cat构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_name << "小猫在说话" << endl;
//	}
//	~cat() {
//		cout << "cat构造函数调用" << endl;
//		if (this->m_name != NULL) {
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//public:
//	string* m_name;
//};
//void test1() {
//	animal* animal = new cat("tom");
//	animal->speak();
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}
//int main() {
//	test1();
//	return 0;
//}
//
////如果子类中没有堆区数据，可以不写为虚析构和纯虚析构