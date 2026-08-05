//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int h, pre[N], ne[N];//不需要id是因为是按顺序排入的
//bool exist[N];
//int main() {
//	int n; cin >> n;
//	pre[1] = h;
//	ne[h] = 1;
//	for (int i = 2; i <= n; i++) {
//		int k, p;
//		cin >> k >> p;
//		if (p == 0) {
//			//在左边插入
//			pre[i] = pre[k];
//			ne[i] = k;
//			ne[pre[k]] = i;
//			pre[k] = i;
//		}
//		else if (p == 1) {
//			//在右边插入
//			pre[i] = k;
//			ne[i] = ne[k];
//			pre[ne[k]] = i;
//			ne[k] = i;
//		}
//	}
//	int m; cin >> m;
//	while (m--) {
//		int x; cin >> x;
//		if (exist[x]) continue;
//		ne[pre[x]] = ne[x];
//		pre[ne[x]] = pre[x];
//		exist[x] = true;
//		
//	}
//	for (int i = ne[h]; i; i = ne[i]) { //输出还得注意，不是很熟练
//		cout << i << " ";
//	}
//	return 0;
//}