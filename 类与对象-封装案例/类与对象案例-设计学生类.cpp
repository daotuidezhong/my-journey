//#include<iostream>
//#include<string>
//using namespace std;
////访问权限
////三种
////公共权限 public      成员 类内可以访问  类外不可以访问
////保护权限 protected   成员 类内可以访问  类外不可以访问
////私有权限 private     成员 类内可以访问  类外不可以访问
//
////struct 和 class 的区别
////struct 默认权限是public
////class 默认权限是private
//class student {
//public://公共权限
//	//类中的属性和行为 统称位成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//
//	//属性
//	string name;
//	int id;
//
//	//行为
//	void showname() {
//		cout << "姓名是" << name<<endl;
//	}
//	void showid() {
//		cout << "id是" << id<<endl;
//	}
//	void setname(string my_name) {
//		name=my_name;
//	}
//	void setid(int my_id) {
//		id=my_id;
//	}
//};
//int main() {
//	student s1;
//	s1.setname("张三");
//	s1.setid(1);
//	s1.showname();
//	s1.showid();
//	return 0;
//}