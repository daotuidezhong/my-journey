#include<iostream>
using namespace std;
#include"worker.h"
#include"boss.h"
boss::boss(int id, string workername, int deptid) {
	m_id = id;
	m_workername = workername;
	m_deptid = deptid;
}
void boss::showinfo() {
	cout << "职工编号:" << m_id
		<< "\t职工姓名:" << m_workername
		<< "\t职位:" << getdeptname()
		<< "\t职位职责：管理公司所有的事务" << endl;
}
string boss::getdeptname() {
	return string("总裁");
}
worker* boss::clone() const {
	return new boss(*this);
}