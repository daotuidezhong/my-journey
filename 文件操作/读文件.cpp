//#include<iostream>
//using namespace std;
//#include<fstream>
////读文件步骤
////1、创建流对象
//// #include<fstream>
////2、打开文件并判断文件是否打开成功
//// ifstream ifs
////3、读数据
//// ifs.open("文件路径"，打开方式)
////4、关闭文件
////ifs.close()
//void test1() {
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//第一种方式
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//	//第二种方式
//	//char buf[1024] = { 0 };//char是单个字符
//	//while (ifs.getline(buf, sizeof(buf))) {
//	//	cout << buf << endl;
//	//}
//	//第三种方式
//	//string buf;//string是字符串
//	//while (getline(ifs, buf)) {
//	//		cout << buf << endl;
//	//}
//	//第四种方式
//	//char c;
//	//while ((c = ifs.get()) != EOF) {
//	//	cout << c;
//	//}
//	ifs.close();
//}
//int main() {
//	test1();
//	return 0;
//}