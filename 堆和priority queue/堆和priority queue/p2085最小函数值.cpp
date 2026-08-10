#include<iostream>
#include<queue>
using namespace std;
typedef long long LL;
const int N = 1e4 + 10;
int a[N], b[N], c[N];
int n, m;
//做出小根堆
struct node {
	int f;//计算出的函数值
	int num;//函数编号
	int x;//代入值
	bool operator<(const node& x)const {
		return f > x.f;
	}
};
//计算函数值
int calcu(int i, int x) {
	return a[i] * x * x + b[i] * x + c[i];
}
int main() {
	cin >> n >> m;
	priority_queue<node> heap;
	//输入函数系数
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}
	//把1的推进去
	for (int i = 1; i <= n; i++) {
		heap.push({ calcu(i,1),i,1 });
	}
	//输出
	while (m--) {
		auto t = heap.top(); heap.pop();
		int f = t.f; int num = t.num; int x = t.x;
		cout << f << " ";
		heap.push({ calcu(num,x + 1),num,x + 1 });
	}
	return 0;
}