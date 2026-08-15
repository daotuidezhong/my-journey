//#include<iostream>
//#include<queue>
//#include<cmath>
//#include<vector>
//using namespace std;
//int n;
//const int N = 2e5 + 10;
//int s[N];//用数字零一标记男女
//bool st[N];//标记已经出队的人
//int pre[N];
//int ne[N],e[N];
//struct node {
//	int d;//技术差
//	int l;//左编号
//	int r;//右编号
//	bool operator <(const node& x) const {
//		if (d != x.d) return d > x.d;
//		else if (l != x.l) return l > x.l;
//		else return r > x.r;
//	}
//};
//priority_queue<node>heap;
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		char ch; cin >> ch;
//		if (ch == 'B') s[i] = 1;
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> e[i];
//		//创建双向链表
//		pre[i] = i - 1;
//		ne[i] = i + 1;
//	}
//	pre[1] = ne[n] = 0;//0表示后面没有元素
//	//1.先把所有的异形差放进堆中
//	for (int i = 2; i <= n; i++) {
//		if (s[i] != s[i - 1]) {
//			heap.push({ abs(e[i] - e[i - 1]), i - 1, i });
//		}
//	}
//	//2.提取结果
//	vector<node> ret;//暂存结果
//	while (heap.size()) {
//		node t = heap.top(); heap.pop();
//		int d = t.d; int l = t.l, r = t.r;
//		if (st[l] || st[r]) continue;
//		ret.push_back(t);
//		st[l] = st[r] = true;
//		ne[pre[l]] = ne[r];
//		pre[ne[r]] = pre[l];
//		int left = pre[l], right = ne[r];
//		if (left&&right&&s[left] != pre[right]) {
//			heap.push({ abs(e[left] - e[right]),left,right});
//		}
//	}
//
//	cout << ret.size() << endl;
//	for (auto& x : ret) {
//		cout << x.l << " " << x.r << endl;
//	}
//	return 0;
//}




#include<iostream>
#include<queue>
#include<cmath>
#include<vector>
using namespace std;
const int N = 2e5 + 10;
int n;
//存数据
int e[N];

//存前后节点
int pre[N], ne[N];

//存男生还是女生
int s[N];

//存是否出队
int st[N];

//用堆存储结构体
struct node {
	int d;//技术差
	int l;//左编号
	int r;//右编号
	//使用小根堆存储
	bool operator<(const node& x) const {
		if (d != x.d) return d > x.d;
		else if (l != x.d) return l > x.l;
		return r > x.r;
	}
};

//创建堆
priority_queue<node> heap;
int main() {
	//读入数据
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char ch; cin >> ch;
		if (ch == 'B') s[i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		cin >> e[i];
		if ((s[i] == 1 && s[i + 1] == 0) || s[i] == 0 && s[i + 1] == 1)
		{
			heap.push({ abs(e[i + 1] - e[i]),i,i + 1 });
		}

	}
	for (int i = 1; i <= n; i++) {
		pre[i] = i - 1;
		ne[i] = i + 1;
	}
	ne[n] = 0;
	//取出数据
	vector<node>ret;
	while (heap.size()) {
		auto t = heap.top(); heap.pop();
		int d = t.d; int l = t.l; int r = t.r;
		if (st[l] || st[r]) continue;
		ret.push_back(t);
		st[l] = st[r] = true;
		ne[pre[l]] = ne[r];
		pre[ne[r]] = pre[l];
		int left = pre[l]; int right = ne[r];
		if (left && right && s[left] != s[right]) {
			heap.push({ abs(e[left] - e[right]),left,right });
		}
	}
	cout << ret.size() << endl;
	for (auto& x : ret) {
		cout << x.l << " " << x.r << endl;
	}
	return 0;
}