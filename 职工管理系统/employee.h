#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"
class employee:public worker {
public:
	employee(int id, string workername, int deptid);
	virtual void showinfo();
	virtual string getdeptname();
	virtual worker* clone() const;
};