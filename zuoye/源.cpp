
//前两题在上一个班已写过


//#include<iostream>
//using namespace std;
//class vehicle{
//	public:
//		vehicle(){
//			
//		}
//		vehicle(int wheels,int weight){
//			m_wheels=wheels;
//			m_weight=weight;
//		}
//		void showw(){
//			cout<<"wheels is "<<m_wheels<<endl;
//			cout<<"weight is "<<m_weight<<endl;
//		}
//		int m_wheels;
//		int m_weight;
//};
//class car:public vehicle{
//	public:
//		car(int passenger_load){
//			m_passenger_load=passenger_load;
//		}
//		
//		void showpassenger_load(){
//			cout<<"passenger_load is "<<m_passenger_load<<endl;
//		}
//		int m_passenger_load;
//};
//class truck:public vehicle{
//	public:
//		truck(int payload){
//			m_payload=payload;
//		}
//		void showpayload(){
//			cout<<"payload is "<<m_payload<<endl;
//			
//		}
//	int m_payload;
//};
//int main(){
//	vehicle v(4,50);
//	v.showw();
//	car c(50);
//	c.showpassenger_load();
//	truck t(20);
//	t.showpayload();
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//class circle{
//	public:
//		circle(){
//			
//		}
//		circle(int r){
//			m_r=r;
//		}
//		int m_r;
//};
//class ball:public circle{
//	public:
//		ball(int r){
//			m_r=r;
//		}
//		double calsball(){
//			return 4*3.14*m_r*m_r;
//		}
//		double calvball(){
//			return 4.0/3*3.14*m_r*m_r*m_r;
//		}
//};
//class zhu:public circle{
//	public:
//		zhu(int r,int h){
//			m_r=r;
//			m_h=h;
//		}
//		double calszhu(){
//			return 2*3.14*m_r*m_r+2*3.14*m_r*m_h;
//		}
//		double calvzhu(){
//			return 3.14*m_r*m_r*m_h;
//		}
//		int m_h;
//};
//class zhui:public circle{
//	public:
//		zhui(int r,int h){
//			m_r=r;
//			m_h=h;
//		}
//		double calszhui(){
//			return 3.14*m_r*m_r+3.14*m_r*sqrt(m_r*m_r+m_h*m_h);
//		}
//		double calvzhui(){
//			return 1.0/3*3.14*m_r*m_r*m_h;
//		}
//		int m_h;
//};
//
//int main(){
//	ball b(1);
//	double r1=b.calsball();
//	double r2=b.calvball();
//	cout<<r1<<endl;
//	cout<<r2<<endl;
//	zhu zu(1,1);
//	double r3=zu.calszhu();
//	double r4=zu.calvzhu();
//	cout<<r3<<endl;
//	cout<<r4<<endl;
//	zhui zi(1,2);
//	double r5=zi.calszhui();
//	double r6=zi.calvzhui();
//	cout<<r5<<endl;
//	cout<<r6<<endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	int arr[1024] = { 0 };//装载原始数据
//	int arr1[1024] = { 0 };//装载重复次数
//	int unique[1024] = { 0 };//装载不相同数据
//	int isexist = 0;
//	int n = 0;
//	cout << "输入n" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		bool inarr = false;
//		for (int j = 0; j < isexist; j++) {
//			if (arr[i] == unique[j]) {
//				inarr = true;
//				arr1[j]++;
//				break;
//			}
//		}
//		if (!inarr) {
//			unique[isexist] = arr[i];
//			arr1[isexist] = 1;
//			isexist++;
//		}
//	}
//	for (int i = 0; i < isexist; i++) {
//		cout << "重复数字： " << unique[i] << "重复次数： " << arr1[i] << endl;
//	}
//	
//	return 0;



//#include<iostream>
//using namespace std;
//#include<string>
//class people {
//public:
//	string m_name;
//	string m_sex;
//	people(string n,string s) {
//		m_name = n;
//		m_sex = s;
//	}
//	void showinfo() {
//		cout << "姓名：" << m_name << endl;
//		cout << "姓名：" << m_name << endl;
//	}
//};
//class student :public people {
//public:
//	int m_id;
//	int m_score;
//	student(string n,string s,int id,int score)
//		:people(n,s)
//	{
//		m_id = id;
//		m_score = score;
//	}
//	void showstudentinfo() {
//		showinfo();
//		cout << "学生学号" << m_id <<endl<< "学生成绩" << m_score<<endl;
//	}
//};
//class teacher :public people {
//public:
//	int m_workid;
//	string m_title;
//	teacher(string n, string s,int workid,string title)
//		:people(n, s) 
//	{
//		m_workid = workid;
//		m_title = title;
//	}
//	void showteacherinfo() {
//		showinfo();
//		cout << "教师工号 " << m_workid <<endl<< "教师职称 " << m_title<<endl;
//	}
//};
//class assiss_teacher :public teacher, public student {
//public:
//	string duty;    // 助教职责
//
//	// 构造函数
//	// 必须分别初始化 Student、Teacher 各自的父类 People
//	assiss_teacher(string n1, string s1, int sid, int sc,
//		string n2, string s2, int tid, string t, string d)
//		: student(n1, s1,sid,sc), teacher(n2, s2, tid, t)
//	{
//		duty = d;
//	}
//
//	// 输出所有信息
//	void showAll() {
//		cout << "===== 助教信息 =====\n";
//		cout << "【继承自学生部分】" << endl;
//		student::showstudentinfo();
//
//		cout << "【继承自教师部分】" << endl;
//		teacher::showteacherinfo();
//
//		cout << "【助教自身属性】职责：" << duty << endl;
//	}
//};
//int main() {
//	assiss_teacher at(
//		"张三", "男", 2024001, 95,
//		"张三", "男", 1001, "讲师", "课程辅导、作业批改"
//	);
//
//	at.showAll();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<string>
//class people {
//public:
//	string m_name;
//	string m_sex;
//	people(string n, string s) {
//		m_name = n;
//		m_sex = s;
//	}
//	void showinfo() {
//		cout << "姓名：" << m_name << endl;
//		cout << "姓名：" << m_name << endl;
//	}
//};
//class student :public people {
//public:
//	int m_id;
//	int m_score;
//	student(string n, string s, int id, int score)
//		:people(n, s)
//	{
//		m_id = id;
//		m_score = score;
//	}
//	void showstudentinfo() {
//		showinfo();
//		cout << "学生学号" << m_id << endl << "学生成绩" << m_score << endl;
//	}
//};
//class teacher :public people {
//public:
//	int m_workid;
//	string m_title;
//	teacher(string n, string s, int workid, string title)
//		:people(n, s)
//	{
//		m_workid = workid;
//		m_title = title;
//	}
//	void showteacherinfo() {
//		showinfo();
//		cout << "教师工号 " << m_workid << endl << "教师职称 " << m_title << endl;
//	}
//};
//class assiss_teacher :virtual public teacher, virtual public student {
//public:
//	string duty;    // 助教职责
//
//	// 构造函数
//	// 必须分别初始化 Student、Teacher 各自的父类 People
//	assiss_teacher(string n1, string s1, int sid, int sc,
//		string n2, string s2, int tid, string t, string d)
//		: student(n1, s1, sid, sc), teacher(n2, s2, tid, t)
//	{
//		duty = d;
//	}
//
//	// 输出所有信息
//	void showAll() {
//		cout << "===== 助教信息 =====\n";
//		cout << "【继承自学生部分】" << endl;
//		student::showstudentinfo();
//
//		cout << "【继承自教师部分】" << endl;
//		teacher::showteacherinfo();
//
//		cout << "【助教自身属性】职责：" << duty << endl;
//	}
//};
//int main() {
//	assiss_teacher at(
//		"张三", "男", 2024001, 95,
//		"张三", "男", 1001, "讲师", "课程辅导、作业批改"
//	);
//
//	at.showAll();
//	return 0;
//}


//#include <iostream>
//#include <cstring>  // 用于 strlen、strcpy、strcat
//using namespace std;
//
//class MyString {
//private:
//    char* str;  // 私有成员：字符指针
//
//public:
//    // 1. 普通构造函数
//    MyString(const char* s = nullptr) {
//        if (s == nullptr) {
//            str = new char[1];   // 空字符串
//            *str = '\0';
//        }
//        else {
//            str = new char[strlen(s) + 1]; // 开辟空间
//            strcpy(str, s);                // 拷贝内容（深拷贝）
//        }
//    }
//
//    // 2. 拷贝构造函数（必须深拷贝！）
//    MyString(const MyString& other) {
//        str = new char[strlen(other.str) + 1];
//        strcpy(str, other.str);
//    }
//
//    // 3. 析构函数
//    ~MyString() {
//        delete[] str;  // 释放堆区内存
//    }
//
//    // a. 求字符串长度
//    int getLength() {
//        return strlen(str);
//    }
//
//    // b. 字符串拼接（返回一个新的 MyString）
//    MyString join(const MyString& other) {
//        // 新长度 = 自身长度 + 拼接字符串长度 + 1
//        int newLen = strlen(str) + strlen(other.str) + 1;
//        char* temp = new char[newLen];
//        strcpy(temp, str);           // 先拷贝自己
//        strcat(temp, other.str);     // 再拼接另一个
//
//        MyString newStr(temp);       // 生成新字符串
//        delete[] temp;
//        return newStr;
//    }
//
//    // 打印字符串
//    void show() {
//        cout << str << endl;
//    }
//};
//
//// 主函数测试
//int main() {
//    // 测试构造
//    MyString s1("Hello");
//    MyString s2(" World");
//
//    // 测试长度
//    cout << "s1 长度：" << s1.getLength() << endl;
//
//    // 测试拼接
//    MyString s3 = s1.join(s2);
//    cout << "拼接结果：";
//    s3.show();
//
//    // 测试拷贝构造
//    MyString s4 = s3;
//    cout << "拷贝构造 s4：";
//    s4.show();
//
//    return 0;
//}