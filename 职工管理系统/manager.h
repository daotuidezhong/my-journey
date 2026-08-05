#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
class manager :public worker {
public:
	manager(int id, string workername, int deptid);
	virtual void showinfo();
	virtual string getdeptname();
	virtual worker* clone() const;
};