//#include<iostream>
//using namespace std;
//string a, b;
//int l1, r1, l2, r2;
//void dfs(int l1, int r1, int l2, int r2) {
//	//递归出口
//	if (l1 > r1)return;
//	int p = l1;//找到根节点所在位置
//	while (a[p] != b[l2]) p++;
//
//	//确定左右子树位置
//	dfs(l1, p - 1, l2+1, r2 - r1 + p);
//	dfs(p + 1, r1, r2 -r1 + p + 1,r2);
//	cout << b[l2];
//}
//int main() {
//	cin >> a >> b;
//	dfs(0, a.size() - 1, 0, b.size() - 1);
//	return 0;
//}