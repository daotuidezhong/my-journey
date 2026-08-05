//#include<iostream>
//using namespace std;
//int n;
//const int N = 300;
//char root;
//char l[N], r[N];
//void dfs(char root) {
//	if (root == '*')return;
//	cout << root;
//	dfs(l[root]);
//	dfs(r[root]); 
//}
//int main() {
//	cin >> n;
//	cin >> root;
//	cin >> l[root] >> r[root];
//	for (int i = 2; i <= n; i++) {
//		char t; cin >> t;
//		cin >> l[t] >> r[t];
//	}
//	dfs(root);
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int n;
//const int N = 300;
//char l[N], r[N];
//char root;
//void dfs(char root) {
//	if (root == '*') {
//		return;
//	}
//	cout << root;
//	dfs(l[root]);
//	dfs(r[root]);
//}
//int main() {
//	cin >> n;
//	cin >> root;
//	cin >> l[root] >> r[root];
//	for (int i = 2; i <= n; i++) {
//		char t; cin >> t;
//		cin >> l[t] >> r[t];
//	}
//	dfs(root);
//
//	return 0;
//}