//#include<iostream>
//using namespace std;
//class person {
//public:
//	person(int age) {
//		//当形参和成员变量同名时，可用this指针来区分
//		this->age = age;
//	}
//
//	//不加&返回时会调用拷贝构函数，此时返回值是一个拷贝体，跟原来p2不一样，表现在地址不一样，这样后面的personaddperson
//	//就会加到拷贝对象上面，p2就不会增加
//	//以person来定义就是拷贝构造，&引用地址与原地址相同
//	person& personaddperson(person p) {
//		//返回对象本身
//		this->age += p.age;
//		return *this; //返回*this就是p2，使得能进行链式加法操作
//	}
//	int age;
//};
//void test1() {
//	person p1(10);
//	cout << "p1.age=" << p1.age << endl;
//	person p2(10);
//	//通过引用返回对象可以实现链式叠加
//	p2.personaddperson(p1).personaddperson(p1).personaddperson(p1);
//	cout << "p2.age=" << p2.age << endl;
//}
//int main() {
//	return 0;
//}