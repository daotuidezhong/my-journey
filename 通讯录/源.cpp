#include<iostream>
using namespace std;
#include<string>
#define max 1000
void showmenu() {
	cout << "###################" << endl;
	cout << "###1.添加联系人####" << endl;
	cout << "###2.显示联系人####" << endl;
	cout << "###3.删除联系人####" << endl;
	cout << "###4.查找联系人####" << endl;
	cout << "###5.修改联系人####" << endl;
	cout << "###6.清空联系人####" << endl;
	cout << "###0.退出通讯录####" << endl;
	cout << "###################" << endl;
}
struct person {
	string name;
	int gender;
	int age;
	string number;
	string address;
};
struct addressbooks {
	struct person address[max];
	int size;
};
void addperson(addressbooks *abs) {
	//name
	string name;
	cout << "请输入名字：" << endl;
	cin >> name;
	abs->address[abs->size].name = name;
	//gender
	int gender;
	cout << "请输入性别：（1.男，2.女）" << endl;
	while (true) {
		cin >> gender;
		if (gender == 1 || gender == 2) {
			abs->address[abs->size].gender = gender;
			break;
		}
		else
			cout << "输入有误，请重新输入" << endl;
	}
	
	//age
	int age;
	cout << "请输入年龄：" << endl;
	while (true) {
		cin >> age;
		if (age < 0 || age>150) {
			cout << "输入有误，请重新输入" << endl;
		}
		else
			break;
	}
	abs->address[abs->size].age = age;
	//number
	string number;
	cout << "请输入电话：" << endl;
	cin >> number;
	abs->address[abs->size].number =number;
	//address
	string address;
	cout << "请输入地址：" << endl;
	cin >> address;
	abs->address[abs->size].address = address;
	//size递增
	abs->size++;
	cout << "添加成功!"<<endl;
	system("pause");
	system("cls");
}
void showperson(addressbooks *abs) {
	if (abs->size == 0) {
		cout << "该通讯录目前为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		for (int i = 0; i < abs->size; i++)	{
			cout <<"姓名：" << abs->address[i].name << "\t";
			cout <<"性别：" << (abs->address[i].gender == 1 ? "男" : "女") << "\t";
			cout <<"年龄：" << abs->address[i].age << "\t";
			cout <<"电话号码：" << abs->address[i].number << "\t";
			cout <<"地址：" << abs->address[i].address << endl;
			system("pause");
			system("cls");
		}
	}
}
int placeperson(addressbooks* abs, string name) {
	for (int i = 0; i < abs->size; i++) {
		if (abs->address[i].name == name) {
			return i;
		}
		else {
			return -1;
		}
	}
}
void detectperson(addressbooks *abs,string name) {
	int j=placeperson(abs, name);
	if (j!=-1) {
		for (int i = j; i < abs->size; i++) {
			abs->address[i] = abs->address[i + 1];
		}
		abs->size--;
	}
	else if (j == -1) {
		cout << "查无此人"<<endl;
		system("pause");
		system("cls");
	}
}
void findperson(addressbooks* abs) {
	if (abs->size != 0) {
		cout << "请选择查找方式(电话or姓名)" << endl;
		string way;
		cin >> way;
		if (way == "电话") {
			cout << "请输入电话" << endl;
			string num;
			cin >> num;
			for (int i = 0; i < abs->size; i++) {
				if (num == abs->address[i].number) {
					cout << "姓名：" << abs->address[i].name << "\t";
					cout << "性别：" << (abs->address[i].gender == 1 ? "男" : "女") << "\t";
					cout << "年龄：" << abs->address[i].age << "\t";
					cout << "电话号码：" << abs->address[i].number << "\t";
					cout << "地址：" << abs->address[i].address << endl;
					system("pause");
					system("cls");
				}
				else {
					cout << "查无此人" << endl;
				}
			}
		}
		else if (way == "姓名") {
			cout << "请输入姓名" << endl;
			string name;
			cin >> name;
			for (int i = 0; i < abs->size; i++) {
				if (name == abs->address[i].name) {
					cout << "姓名：" << abs->address[i].name << "\t";
					cout << "性别：" << (abs->address[i].gender == 1 ? "男" : "女") << "\t";
					cout << "年龄：" << abs->address[i].age << "\t";
					cout << "电话号码：" << abs->address[i].number << "\t";
					cout << "地址：" << abs->address[i].address << endl;
					system("pause");
					system("cls");
				}
				else {
					cout << "查无此人" << endl;
				}
			}
		}
	}
	else {
		cout << "当前通讯录为空" << endl;
		system("pause");
		system("cls");
	}
}
void modifyperson(addressbooks* abs) {
	string name;
	cout << "请输入需要修改人的姓名" << endl;
	cin >> name;
	while (true) {
		cout << "################" << endl;
		cout << "###1.修改姓名####" << endl;
		cout << "###2.修改性别####" << endl;
		cout << "###3.修改年龄####" << endl;
		cout << "###4.修改电话####" << endl;
		cout << "###5.修改住址####" << endl;
		cout << "###0.退出修改####" << endl;
		cout << "################" << endl;
		cout << "请输入需要修改的内容：" << endl;
		int input;
		cin >> input;
		if (input == 0) {
			system("pause");
			system("cls");
			break;
		}
		switch (input) {
		case 1: {
			string name1;
			cout << "请输入修改后的姓名" << endl;
			cin >> name1;
			for (int i = 0; i < abs->size; i++) {
				if (abs->address[i].name == name) {
					abs->address[i].name = name1;
				}
			}
			system("pause");
			system("cls");
		}
			break;
		case 2:
		{
			int gender1;
			cout << "请输入修改后的性别（1.男，2.女）" << endl;
			cin >> gender1;
			for (int i = 0; i < abs->size; i++) {
				if (abs->address[i].name == name) {
					abs->address[i] .gender = gender1;
				}
			}
			system("pause");
			system("cls");
		}
			break;
		case 3:
		{
			int age ;
			cout << "请输入修改后的年龄" << endl;
			cin >> age;
			for (int i = 0; i < abs->size; i++) {
				if (abs->address[i].name == name) {
					abs->address[i].age = age;
				}
			}
			system("pause");
			system("cls");
		}
			break;
		case 4:
		{
			string num;
			cout << "请输入修改后的电话" << endl;
			cin >> num;
			for (int i = 0; i < abs->size; i++) {
				if (abs->address[i].name == name) {
					abs->address[i].number = num;
				}
			}
			system("pause");
			system("cls");
		}
			break;
		case 5:
		{
			string address;
			cout << "请输入修改后的住址" << endl;
			cin >> address;
			for (int i = 0; i < abs->size; i++) {
				if (abs->address[i].name == name) {
					abs->address[i].address = address;
				}
			}
			system("pause");
			system("cls");
		}
			break;
		default:
			cout << "输入有误请重新输入" << endl;
		}
	}
}
void cleanperson(addressbooks* abs) {
	abs->size = 0;
	cout << "该通讯录已清空" << endl;
	system("pause");
	system("cls");
}
int main() {
	int input = 0;
	addressbooks abs;
	abs.size = 0;
	while (true) {
		showmenu();
		cin >> input;
		switch (input) {
		case 1:
			addperson(&abs);
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
		{
			string name1;
			cout << "请输入需要删除的姓名：" << endl;
			cin >> name1;
			detectperson(&abs, name1);
			cout << "删除成功" << endl;
			system("pause");
			system("cls");
		}
			break;
		case 4:
			findperson(&abs);
			break;
		case 5:
			modifyperson(&abs);
			break;
		case 6:
			cleanperson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用通讯录" << endl;
			return 0;
			break;
		default:
			cout << "输入无效，请重新输入" << endl;
			break;
		}
	}
	return 0;
}