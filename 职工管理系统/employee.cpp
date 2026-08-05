#include<iostream>
using namespace std;
#include"worker.h"
#include"employee.h"

employee::employee(int id, string workername, int deptid) {

	m_id = id;
	m_workername = workername;
	m_deptid = deptid;
}
void employee::showinfo() {
	cout << "职工编号:" << m_id
		<< "\t职工姓名:" << m_workername
		<< "\t职位:" << getdeptname()
		<< "\t职位职责：完成经理交给的任务" << endl;
}
string employee::getdeptname() {
	return string("员工");
}
worker* employee::clone() const {
	return new employee(*this);
}