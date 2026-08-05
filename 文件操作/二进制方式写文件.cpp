//#include<iostream>
//using namespace std;
//#include<fstream>
//class person {
//public:
//	char name[64];
//	int age;
//};
//void test1() {
//	ofstream ofs("person.txt",ios::out|ios::binary);
//	person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(person));//写文件需要 const char(*)类型
//	ofs.close();
//
//	ifstream ifs("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open()) {
//		cout << "文件读取失败" << endl;
//		return;
//	}
//
//	ifs.read((char*)&p, sizeof(person));//读文件需要char(*)类型
//	//因为char*指针可以一个一个向后移动，所以使用char*指针
//	cout << "姓名:" << p.name << "年龄" << p.age << endl;
//	ifs.close();
//}
//int main() {
//	test1();
//	return 0;
//}