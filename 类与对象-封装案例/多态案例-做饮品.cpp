//#include<iostream>
//using namespace std;
//class abstractdrinking {
//public:
//	virtual void boil() = 0;
//	virtual void brew() = 0;
//	virtual void pourincup() = 0;
//	virtual void putsth() = 0;
//	void makedrink() {
//		boil();
//		brew();
//		pourincup();
//		putsth();
//	}
//};
//class makecoffee :public abstractdrinking {
//	void boil() {
//		cout << "ÖóÅ©·òÉ½Èª" << endl;
//	}
//	void brew() {
//		cout << "³åÅÝ¿§·È" << endl;
//	}
//	void pourincup() {
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//	void putsth() {
//		cout << "Ìí¼ÓÌÇºÍÅ£ÄÌ" << endl;
//	}
//};
//class maketea :public abstractdrinking {
//	void boil() {
//		cout << "Öó¿óÈªË®" << endl;
//	}
//	void brew() {
//		cout << "³å²è" << endl;
//	}
//	void pourincup() {
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//	void putsth() {
//		cout << "Ìí¼ÓºìÔæ" << endl;
//	}
//};
//void dowork(abstractdrinking* abs) {
//	abs->makedrink();
//	delete abs;
//}
//void test1() {
//	dowork(new makecoffee);
//	dowork(new maketea);
//}
//int main() {
//	test1();
//	return 0;
//}