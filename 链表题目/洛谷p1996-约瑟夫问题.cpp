
//解法一：用单链表
//#include<iostream>
//using namespace std;
//const int N = 110;
//int ne[N];//不用创建e数组，因为是按照顺序排布
//int main() {
//	//初始化循环链表
//	int n, m; cin >> n>> m;
//	for (int i = 1; i < n; i++) {
//		ne[i] = i + 1;
//	}
//	ne[n] = 1;//最后一个元素继续指向1
//
//	//实现游戏
//	int t = n;
//	for (int i = 1; i <= n; i++) {//删掉n个元素需要n次
//		for (int j = 1; j < m; j++) {//在m-1次位置记录
//			t = ne[t];
//		}
//		cout << ne[t] << " ";
//		ne[t] = ne[ne[t]];
//	}
//	return 0;
//}


//解法二：用循环双向链表

#include<iostream>
using namespace std;
const int N = 110;
int pre[N], ne[N];
int main() {
	int n, m; cin >> n >> m;
	//初始化链表
	for (int i = 1; i <= n; i++) {
		pre[i] = i - 1;
		ne[i] = i + 1;
	}
	pre[1] = n;
	ne[n] = 1;

	//实现游戏
	int p = 1;//从一开始数，那就要数m-1次
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < m; j++) {
			p = ne[p];
		}
		cout << p << " ";
		int nextperson = ne[p];//记录下一个人

		ne[pre[p]] = ne[p];
		pre[ne[p]] = pre[p];

		p = nextperson;
	}

	return 0;
}