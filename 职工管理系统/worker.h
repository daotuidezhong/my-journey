#pragma once
#include<iostream>
#include<string>
using namespace std;
class worker {
public:
	virtual void showinfo() = 0;//显示个人信息

	virtual string getdeptname() = 0;//获取岗位名称
	virtual worker* clone() const = 0;
	int m_id;//职工编号
	string m_workername;//职工姓名
	int m_deptid;//职工所在部门编号
};