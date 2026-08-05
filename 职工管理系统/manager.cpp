#include<iostream>
using namespace std;
#include"worker.h"
#include"manager.h"
manager::manager(int id, string workername, int deptid) {
	m_id = id;
	m_workername = workername;
	m_deptid = deptid;
}
void manager::showinfo() {
	cout << "职工编号:" << m_id
		<< "\t职工姓名:" << m_workername
		<< "\t职位:" << getdeptname()
		<< "\t职位职责：完成老板交给的任务，并下发任务给员工" << endl;
}
string manager::getdeptname() {
	return string("经理");
}
worker* manager::clone() const {
	return new manager(*this);
}