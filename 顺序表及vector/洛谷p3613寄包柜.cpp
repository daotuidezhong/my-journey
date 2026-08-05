//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 10;
//vector<int> a[N];//创建N个vector数组，即N个柜子
//int n, q;
//int main() {
//	cin >> n >> q;
//	while (q--) {
//		int num, i, j, k;
//		cin >> num >> i >> j;
//		if (num == 1) {
//			cin >> k;
//			if (a[i].size() <= j) {
//				a[i].resize(j + 1);//需要扩容到j+1才能访问到j个元素
//			}
//			a[i][j] = k;
//		}
//		else {
//			cout << a[i][j] << endl;
//		}
//	}
//	return 0;
//}