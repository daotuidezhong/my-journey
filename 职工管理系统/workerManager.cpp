#include"workerManager.h"
#include"worker.h"

workerManager::workerManager() {
	ifstream ifs;
	ifs.open(filename, ios::in);
	//1.文件不存在
	if (!ifs.is_open()) {
		//初始化属性
		this->m_empnum = 0;
		this->m_emparray = NULL;
		fileisempty = true;
		ifs.close();
		return;
	}
	//2.文件存在但是为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		this->m_empnum = 0;
		this->m_emparray = NULL;
		fileisempty = true;
		ifs.close();
		return;
	}
	//3.文件存在并且记录着文件
	int num = getnum();
	this->m_empnum = num;
	//开辟空间
	m_emparray = new worker * [m_empnum];
	//将文件中的数据存到数组中
	initemp();
	fileisempty = false;
}
workerManager::~workerManager() {
	release();
}
void workerManager::showmenu() {
	cout << "************************************" << endl;
	cout << "*********欢迎使用职工管理系统*********" << endl;
	cout << "*********0. 退出管理程序**************" << endl;
	cout << "*********1. 增加职工信息**************" << endl;
	cout << "*********2. 显示职工信息**************" << endl;
	cout << "*********3. 删除离职职工**************" << endl;
	cout << "*********4. 修改职工信息**************" << endl;
	cout << "*********5. 查找职工信息**************" << endl;
	cout << "*********6. 按照编号排序**************" << endl;
	cout << "*********7. 清空所有文档**************" << endl;
	cout << "************************************" << endl;
	cout << endl;
}
void workerManager::exitsystem() {
	cout<< "欢迎下次使用" << endl;
	exit(0);
}
void workerManager::addworker() {
	cout << "请输入需要添加的人数" << endl;
	int addnum = 0;
	cin >> addnum;

	if (addnum <= 0) {
		cout << "输入有误" << endl;
		system("pause");
		system("cls");
		return;
	}

	// 计算新空间大小
	int newsize = this->m_empnum + addnum;

	// 开辟新空间
	worker** newspace = new worker * [newsize];

	// 将原来空间下的数据拷贝到新空间
	if (this->m_emparray != NULL) {
		for (int i = 0; i < this->m_empnum; i++) {
			newspace[i] = this->m_emparray[i];
		}
	}

	// 批量添加
	for (int i = 0; i < addnum; i++) {
		int id = 0;
		string name = "";
		int dselect = 0;

		// 输入职工编号，并判断是否重复
		while (true) {
			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;

			bool isRepeat = false;

			// 判断是否和原来的职工编号重复
			for (int j = 0; j < this->m_empnum; j++) {
				if (this->m_emparray[j]->m_id == id) {
					isRepeat = true;
					break;
				}
			}

			// 判断是否和本次新添加的职工编号重复
			for (int j = this->m_empnum; j < this->m_empnum + i; j++) {
				if (newspace[j]->m_id == id) {
					isRepeat = true;
					break;
				}
			}

			if (isRepeat) {
				cout << "输入的职工编号重复，请重新输入！" << endl;
			}
			else {
				break;
			}
		}

		cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
		cin >> name;

		cout << "请选择该职工岗位:" << endl;
		cout << "1.普通职工" << endl;
		cout << "2.经理" << endl;
		cout << "3.老板" << endl;
		cin >> dselect;

		worker* wk = NULL;

		switch (dselect) {
		case 1:
			wk = new employee(id, name, 1);
			break;
		case 2:
			wk = new manager(id, name, 2);
			break;
		case 3:
			wk = new boss(id, name, 3);
			break;
		default:
			cout << "输入岗位有误，默认设置为普通职工" << endl;
			wk = new employee(id, name, 1);
			break;
		}

		// 将创建的职工指针保存到数组中
		newspace[this->m_empnum + i] = wk;
	}

	// 释放原来的数组空间
	delete[] this->m_emparray;

	// 更改新空间的指向
	this->m_emparray = newspace;

	// 更新新的职工人数
	this->m_empnum = newsize;

	// 更新文件状态
	this->fileisempty = false;

	// 保存数据到文件
	this->save();

	cout << "成功添加" << addnum << "名新职工" << endl;

	system("pause");
	system("cls");
}
//保存至文件
void workerManager::save() {
	ofstream ofs;
	ofs.open(filename, ios::out);
	for (int i = 0; i < m_empnum; i++) {
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_workername << " "
			<< this->m_emparray[i]->m_deptid << " " << endl;
	}
	ofs.close();
}
//判断文件中目前有几个人
int workerManager::getnum() {
	ifstream ifs;
	ifs.open(filename, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		num++;
	}
	return num;
}
void workerManager::initemp() {
	ifstream ifs;
	ifs.open(filename, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		worker* worker = NULL;
		if (did == 1) {
			worker = new employee(id, name, did);
		}
		else if (did == 2) {
			worker = new manager(id, name, did);
		}
		else if (did == 3) {
			worker = new boss(id, name, did);
		}
		m_emparray[index] = worker;
		index++;
	}
	
	ifs.close();
}
//判断文件是否为空
void workerManager::showemp() {
	if (fileisempty) {
		cout << "文件不存在或者为空" << endl;
	}
	else {
		for (int i = 0; i < m_empnum; i++) {
			m_emparray[i]->showinfo();
		}
	}
	system("pause");
	system("cls");
}
//删除职工
void workerManager::deleteworker() {
	
	if (fileisempty) {
		cout << "文件不存在或者为空，无法删除" << endl;
	}
	else {
		cout << "请输入需要删除的员工编号" << endl;
		int id = 0;
		cin >> id;
		int index = workerisexist(id);
		if (index != -1) {
			for (int i = index; i < m_empnum - 1; i++) {
				m_emparray[i] = m_emparray[i + 1];
			}
			m_empnum--;//更新数组中记录人员个数
			m_emparray[m_empnum] = NULL;

			if (m_empnum == 0) {
				fileisempty = true;
			}
			//数据同步更新到文件中
			save();
			cout << "删除成功" << endl;
		}
		else {
			cout << "删除失败，未找到员工" << endl;
		}
	}
	system("pause");
	system("cls");
}
//判断职工是否存在，存在返回下标位置，不存在返回-1、
int workerManager::workerisexist(int id) {
	int index = -1;

	for (int i = 0; i < m_empnum; i++) {
		if (m_emparray[i]->m_id == id) {
			index = i;
			break;
		}
	}
	return index;
}
//修改员工
void workerManager::modifyworker() {
	if (fileisempty) {
		cout<< "文件不存在或者为空，无法修改" << endl;
	}
	else {
		cout << "请输入需要修改的员工编号" << endl;
		int id;
		cin >> id;
		int index = workerisexist(id);
		if (index != -1) {
			delete m_emparray[index];
			int newid = 0;
			string newname = "";
			int dselect=0;
			cout << "已查到：" << id << "号职工，请输入新职工号：" << endl;
			cin >> newid;
			cout << "请输入新姓名" << endl;
			cin >> newname;
			cout << "请输入新职位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dselect;
			worker* worker = NULL;
			if (dselect == 1) {
				worker = new employee(newid, newname, dselect);
			}
			else if (dselect == 2) {
				worker = new manager(newid, newname, dselect);
			}
			else if (dselect == 3) {
				worker = new boss(newid, newname, dselect);
			}
			m_emparray[index] = worker;
			cout << "修改成功" << endl;
			save();
		}
		else {
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找员工
void workerManager::findworker() {
	if (fileisempty) {
		cout << "文件不存在或者为空" << endl;
	}
	else {
		cout << "请输入需要按照何种方式查找" << endl;
		cout << "1.工号" << endl;
		cout << "2.姓名" << endl;

		int input = 0;
		cin >> input;

		bool flag = false;

		if (input == 1) {
			int id;
			cout << "请输入需要查找的id号" << endl;
			cin >> id;

			for (int i = 0; i < m_empnum; i++) {
				if (m_emparray[i]->m_id == id) {
					cout << "该人已找到" << endl;
					m_emparray[i]->showinfo();
					flag = true;
					break;
				}
			}
		}
		else if (input == 2) {
			string name;
			cout << "请输入需要查询的姓名" << endl;
			cin >> name;

			for (int i = 0; i < m_empnum; i++) {
				if (m_emparray[i]->m_workername == name) {
					cout << "该人已找到" << endl;
					m_emparray[i]->showinfo();
					flag = true;
				}
			}
		}
		else {
			cout << "输入错误" << endl;
			system("pause");
			system("cls");
			return;
		}

		if (!flag) {
			cout << "查无此人" << endl;
		}
	}

	system("pause");
	system("cls");
}
//排序员工
void workerManager::sortworker() {
	if (fileisempty) {
		cout << "文件不存在或者为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "请选择方式" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;
		int myselect = 0;
		cin >> myselect;
		for (int i = 0; i < m_empnum-1; i++) {
			for (int j = 0; j < m_empnum - 1 - i; j++) {
				if(myselect==1){
					if (m_emparray[j]->m_id > m_emparray[j+1]->m_id) {
						worker* temp;
						temp = m_emparray[j];
						m_emparray[j] = m_emparray[j + 1];
						m_emparray[j + 1] = temp;
					}
				}
				else if (myselect == 2) {
					if (m_emparray[j]->m_id < m_emparray[j + 1]->m_id) {
						worker* temp;
						temp = m_emparray[j];
						m_emparray[j] = m_emparray[j + 1];
						m_emparray[j + 1] = temp;
					}
				}
				
			}
		}
		cout << "排序成功" << endl;
		save();
		system("pause");
		system("cls");

	}
}
//清空文件
void workerManager::cleamfile() {
	cout << "是否要清空文件？" << endl;
	cout << "1.确定" << endl;
	cout << "2.取消" << endl;
	int input=0;
	cin >> input;
	if (input == 1) {
		cout << "请输入密码" << endl;
		int password1;
		cin >> password1;
		if (password1 == password) {
			release();
			fileisempty = true;

			ofstream ofs(filename, ios::trunc);
			ofs.close();

			cout << "清除成功" << endl;
			system("pause");
			system("cls");
		}
		else {
			cout << "密码错误" << endl;
			system("pause");
			system("cls");
		}
	}
	else if(input==2){
		cout << "已取消" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "输入错误" << endl;
		system("pause");
		system("cls");
	}
}
//实现深拷贝
workerManager::workerManager(const workerManager& wm) {
	this->m_empnum = wm.m_empnum;
	this->fileisempty = wm.fileisempty;

	if (wm.m_emparray != NULL && wm.m_empnum > 0) {
		this->m_emparray = new worker * [wm.m_empnum];

		for (int i = 0; i < wm.m_empnum; i++) {
			this->m_emparray[i] = wm.m_emparray[i]->clone();
		}
	}
	else {
		this->m_emparray = NULL;
	}
}
//重载赋值运算
workerManager& workerManager::operator=(const workerManager& wm) {
	if (this != &wm) {
		release();

		this->m_empnum = wm.m_empnum;
		this->fileisempty = wm.fileisempty;

		if (wm.m_emparray != NULL && wm.m_empnum > 0) {
			this->m_emparray = new worker * [wm.m_empnum];

			for (int i = 0; i < wm.m_empnum; i++) {
				this->m_emparray[i] = wm.m_emparray[i]->clone();
			}
		}
		else {
			this->m_emparray = NULL;
		}
	}

	return *this;
}
//释放
void workerManager::release() {
	if (this->m_emparray != NULL) {
		for (int i = 0; i < this->m_empnum; i++) {
			delete this->m_emparray[i];
			this->m_emparray[i] = NULL;
		}

		delete[] this->m_emparray;
		this->m_emparray = NULL;
	}

	this->m_empnum = 0;
}