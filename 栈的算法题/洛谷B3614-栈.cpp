//#include<iostream>
//#include<stack>
//#include<string>
//using namespace std;
//typedef unsigned long long LL;
//int main() {
//	int T; cin >> T;
//	
//	while (T--) {
//		stack<LL> st;//这一轮循环结束，st 就会被自动销毁。
//		int n; cin >> n;
//		while (n--) {
//			string s; cin >> s;
//			if (s == "push") {
//				LL n; cin >> n;
//				st.push(n);
//			}
//			else if (s == "query") {
//				if (st.empty()) {
//					cout << "Anguei!" << endl;
//				}
//				else {
//					cout<<st.top()<<endl;
//				}
//			}
//			else if (s == "size") {
//				cout << st.size() << endl;
//			}
//			else if (s == "pop") {
//				if (st.empty()) {
//					cout << "Empty" << endl;
//				}
//				else {
//					st.pop();
//				}
//			}
//		}
//	}
//	return 0;
//}