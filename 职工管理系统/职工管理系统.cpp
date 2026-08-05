#include<iostream>
#include"workerManager.h"
using namespace std;
int main() {
	workerManager wm;
	while (true) {
		wm.showmenu();
		cout << "请输入你的选择" << endl;
		int num;
		cin >> num;
		switch (num) {
		case 0://退出系统
			wm.exitsystem();
			break;
		case 1://添加职工
			wm.addworker();
			break;
		case 2://显示职工
			wm.showemp();
			break;
		case 3://删除职工
			wm.deleteworker();
			break;
		case 4://修改职工
			wm.modifyworker();
			break;
		case 5://查找职工
			wm.findworker();
			break;
		case 6://排序员工
			wm.sortworker();
			break;
		case 7://清空文件
			wm.cleamfile();
			break;
		default:
			system("cls");
			break;
		}
	}

	return 0;
}