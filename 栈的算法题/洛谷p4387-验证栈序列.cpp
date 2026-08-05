//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e5 + 10;
//int a[N], b[N];
//int main() {
//	int q; cin >> q;
//	while (q--) {
//		int n; cin >> n;//每一轮的n不同，需要重新输入
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i];
//		}
//		for (int i = 1; i <= n; i++) {
//			cin >> b[i];
//		}
//		int j = 1;
//		stack<int> st;
//		for (int i = 1; i <= n; i++) {
//			st.push(a[i]);
//			while (j <= n && !st.empty() && (st.top() == b[j])) {
//				st.pop();
//				j++;
//			}
//		}
//		if (!st.empty()) {
//			cout << "No" << endl;
//		}
//		else {
//			cout << "Yes" << endl;
//		}
//	}
//	
//	return 0;
//}