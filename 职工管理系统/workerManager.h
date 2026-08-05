#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include<string>
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define filename "empfile.txt"
#define password 123456
class workerManager {
public:
	//构造函数
	workerManager();

	//深拷贝
	workerManager(const workerManager& wm);
	//复制运算符
	workerManager& operator= (const workerManager & wm);
	//展示菜单
	void showmenu();

	//析构函数
	~workerManager();

	//退出系统
	void exitsystem();

	//记录职工人数
	int m_empnum;

	//职工数组指针
	worker** m_emparray;

	//添加职工函数
	void addworker();

	//保存至文件
	void save();

	//标记
	bool fileisempty;

	//判断文件中目前有几个人
	int getnum();

	//初始化员工
	void initemp();

	//判断文件是否为空
	void showemp();

	//删除职工
	void deleteworker();

	//判断职工是否存在，存在返回下标位置，不存在返回-1、
	int workerisexist(int id);

	//修改员工
	void modifyworker();

	//查找员工
	void findworker();

	//排序员工
	void sortworker();

	//清空文件
	void cleamfile();
	//释放函数
	void release();
};
