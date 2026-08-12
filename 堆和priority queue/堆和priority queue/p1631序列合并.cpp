#include<iostream>
#include<queue>
using namespace std;
const int N = 1e5 + 10;
int n;
int a[N], b[N];
struct node {
	int sum;//存储和
	int i, j;//存储a，b的编号
	bool operator < (const node& x)const {
		return sum > x.sum;
	}
};
int calcu(int u,int v) {
		int sum = a[u] + b[v];
		return sum;
}
priority_queue<node> heap;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	//先将第一次的总和结果存入
	for (int i = 1; i <= n; i++) {
		int sum = a[1] + b[i];
		heap.push({ sum,1,i });
	}
	//再输出后面的结果
	while (n--) {
		auto t = heap.top(); heap.pop();
		int sum = t.sum; int i = t.i; int j = t.j;
		cout << sum << " ";
		if (i + 1 <= n) { //可能会越界
			heap.push({ calcu(i + 1,j),i + 1,j });
		}
	}
	return 0; 
}