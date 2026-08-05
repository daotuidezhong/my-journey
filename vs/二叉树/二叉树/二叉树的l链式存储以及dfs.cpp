//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int l[N], r[N];
////bool st[N];//可以不用标记数组，因为二叉树有顺序，不会成环
////前序遍历
//void dfs1(int u) {
//	cout << u << " ";
//	if(l[u])dfs1(l[u]);
//	if(r[u])dfs1(r[u]);
//}
////中序遍历
//void dfs2(int u) {
//	
//	if (l[u])dfs2(l[u]);//左根右
//	cout << u << " ";
//	if (r[u])dfs2(r[u]);
//}
////后序遍历
//void dfs3(int u) {
//	if (l[u])dfs3(l[u]);//左右根
//	
//	if (r[u])dfs3(r[u]);
//	cout << u << " ";
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> l[i] >> r[i];
//	}
//	//前序遍历
//	dfs1(1);
//	cout << endl;
//	//中序遍历
//	dfs2(1);
//	cout << endl;
//	//后序遍历
//	dfs3(1);
//	cout << endl;
//	return 0;
//}