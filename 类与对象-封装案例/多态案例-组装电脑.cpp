//#include<iostream>
//using namespace std;
//class cpu {
//public:
//	virtual void calculate() = 0;
//};
//class videocard {
//public:
//	virtual void display() = 0;
//};
//class memory {
//public:
//	virtual void storage() = 0;
//};
//class computer {
//public:
//	computer(cpu *cpu,videocard*vc,memory *mem) {
//		m_cpu = cpu;//类是抽象类，无法创建对象，所以使用指针操作
//		m_vc = vc;
//		m_mem = mem;
//	}
//	void dowork() {
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	~computer() {
//		if (m_cpu == NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc == NULL) {
//			delete m_vc;
//			m_cpu = NULL;
//		}
//		if (m_mem == NULL) {
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//	cpu* m_cpu;
//	videocard* m_vc;
//	memory* m_mem;
//};
////intel系列
//class intelcpu :public cpu {
//public:
//	//这里要实现cpu的虚函数
//	virtual void calculate() {
//		cout << "intelcpu正在工作" << endl;
//	}
//};
//class intelvideocard :public videocard {
//public:
//
//	virtual void display() {
//		cout << "intelvideocard正在工作" << endl;
//	}
//};
//class intelmemory :public memory {
//public:
//
//	virtual void storage() {
//		cout << "intelmemory正在工作" << endl;
//	}
//};
////lenovo系列
//
//class lenovocpu :public cpu {
//public:
//
//	virtual void calculate() {
//		cout << "lenovocpu正在工作" << endl;
//	}
//};
//class lenovovideocard :public videocard {
//public:
//
//	virtual void display() {
//		cout << "lenovovideocard正在工作" << endl;
//	}
//};
//class lenovomemory :public memory {
//public:
//
//	virtual void storage() {
//		cout << "lenovomemory正在工作" << endl;
//	}
//};
////amd系列
//class amdcpu :public cpu {
//public:
//
//	virtual void calculate() {
//		cout << "amdcpu正在工作" << endl;
//	}
//};
//class amdvideocard :public videocard {
//public:
//
//	virtual void display() {
//		cout << "amdvideocard正在工作" << endl;
//	}
//};
//class amdmemory :public memory {
//public:
//
//	virtual void storage() {
//		cout << "amdmemory正在工作" << endl;
//	}
//};
//void test1() {
//	//computer1
//	cpu* Intelcpu = new intelcpu;//父类指针指向子类，多态
//	videocard* Intelvideocard = new intelvideocard;
//	memory* Intelmemory = new intelmemory;
//
//	computer* Computer1 = new computer(Intelcpu, Intelvideocard, Intelmemory);
//	Computer1->dowork();
//	delete Computer1;
//
//	cout << "-------------------------" << endl;
//	//computer2
//	
//	cpu* Lenovocpu = new lenovocpu;
//	videocard* Lenovovideocard = new lenovovideocard;
//	memory* Lenovomemory = new lenovomemory;
//
//	computer* Computer2 = new computer(Lenovocpu, Lenovovideocard, Lenovomemory);
//	Computer2->dowork();
//	delete Computer2;
//}
//int main() {
//	test1();
//	return 0;
//}