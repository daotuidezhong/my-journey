//#include<iostream>
//using namespace std;
//#include<string>
////成员属性设置有私有
////1、可以自己控制读写权限
////2、对于写可以检测数据有效性
//class person {
//public:
//	void set_name(string name) {
//		my_name = name;
//	}
//	void showname() {
//		cout << "姓名为：" << my_name << endl;
//	}
//	void setage(int age) {
//		while (true) {
//			if (age < 0 || age>150) {
//				cout << "年龄" << age << "输入有误，请重新输入" << endl;
//				cin >> age;
//			}
//			if (age > 0 || age <= 150) {
//				my_age = age;
//				break;
//			}
//		}
//	}
//	void showage() {
//		cout << "年龄为：" << my_age << endl;
//	}
//	void setidol(string idol) {
//		my_idol = idol;
//	}
//private:
//	string my_name; //可读可写
//	int my_age;  //可读可写 但要判断输入是否合理
//	string my_idol; //只可写不可读
//};
//int main() {
//	person p1;
//	p1.set_name("张三");
//	p1.showname();
//	int age;
//	cin >> age;
//	p1.setage(age);
//	p1.showage();
//	string idol;
//	cin >> idol;
//	p1.setidol(idol);
//	return 0;
//}