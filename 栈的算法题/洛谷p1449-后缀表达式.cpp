//#include<iostream>
//#include<stack>
//using namespace std;
//int main() {
//	char ch;
//	stack<int> st;
//	int num = 0;//储存我要放入栈中的数字
//	while (cin >> ch) {
//		if (ch == '@') break;
//		else if (ch >= '0' && ch <= '9') {
//			num = num * 10 + ch - '0';
//		}
//		else if (ch == '.') {
//			st.push(num);
//			num = 0;
//		}
//		else {
//			int right = st.top();
//			st.pop();
//			int left = st.top();
//			st.pop();
//			if (ch == '+' ) {
//				st.push(left + right);
//			}
//			else if (ch == '-') {
//				st.push(left - right);
//			}
//			else if (ch == '*') {
//				st.push(left * right);
//			}
//			else {
//				st.push(left / right);
//			}
//		}
//	}
//	cout << st.top();
//	return 0;
//}