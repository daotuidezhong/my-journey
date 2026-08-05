//#include<iostream>
//using namespace std;
//int l1, r1, l2, r2;
//string a, b;
//void dfs(int l1,int r1,int l2,int r2) {
//	//递归出口
//	if (l1 > r1) return;
//
//	//函数体
//	//确定根节点
//	cout<<b[r2];
//	int p = l1;
//	while (a[p] != b[r2]) p++; //p用来标记中序遍历中根节点的位置
//	//划分左右子树
//	dfs(l1, p - 1, l2, l2 + p - l1 - 1);
//	dfs(p + 1, r1, l2 + p - l1, r2 - 1);
//
//}
//int main() {
//	cin >> a >> b;
//	dfs(0, a.size() - 1, 0, b.size() - 1);
//	return 0;
//}




//#include<iostream>
//using namespace std;
//string a, b;
//int l1, r1, l2, r2;
//void dfs(int l1, int r1, int l2, int r2) {
//	//递归出口
//	if (l1 > r1) return;
//	//确定根节点
//	cout << b[r2];
//	//用位置p定位中序排列中根节点位置
//	int p = l1;
//	while (a[p] != b[r2]) p++;
//	//划分左右子树
//	dfs(l1, p - 1, l2, l2 + p - l1 - 1);
//	dfs(p + 1, r1, l2 + p - l1, r2 - 1);
//}
//int main() {
//	cin >> a >> b;
//	dfs(0, a.size() - 1, 0, b.size() - 1);
//	return 0;
//}