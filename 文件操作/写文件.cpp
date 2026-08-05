//#include<iostream>
//using namespace std;
//#include<fstream>
////操作文件的三大类
////1、ofstream：写操作
////2、ifstream：读操作
////3、fstream：读写操作
//
//
////写文件步骤
//// 1、包含有文件<fstream>
//// 2、创建流对象
//// ofstream ofs
//// 3、打开文件
//// ofs.open("文件路径"，打开方式)
//// 4、写数据
//// ofs<<"写入数据"
////5、关闭文件
////ofs.close()
//
//
////文件打开方式
////ios::in 为读文件而打开文件
////ios::out 为写文件而打开文件
////ios:ate 初始位置：文件尾
////ios::app追加方式写文件
////ios::trunc 如果文件存在先删除，再创建
////ios::binary 二进制方式
//
//int main() {
//	ofstream ofs;
//	ofs.open("text.txt", ios::out);
//	ofs << "姓名：张三" << endl;
//	ofs << "年龄：男" << endl;
//	ofs << "性别：18" << endl;
//	ofs.close();
//	return 0;
//}