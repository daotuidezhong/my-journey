//#include<iostream>
//#include<stack>
//const int N = 110;
//bool st[N];//st[i]标记是否已经匹配
//using namespace std;
//int main() {
//	string s; cin >> s;
//	stack<int> stk;//储存下标，方便查找
//	for (int i = 0; i < s.size(); i++) {
//		char ch = s[i];
//		if (ch == '[' || ch == '(') stk.push(i);
//		else {
//			//右括号
//			if (stk.empty()) continue;//s = ")"有可能输入的就只有一个右括号
//			int t = stk.top();
//			char left = s[t];
//			if ((left == '(' && ch == ')')||(left=='['&&ch==']')) {
//				st[t] = st[i] = true;// t为左括号的位置，i为右括号的位置
//				stk.pop();
//			}
//			
//		}
//	}
//	//还原字符串
//	string ret = "";
//	for (int i = 0; i < s.size(); i++) {
//		char ch = s[i];
//		if (st[i]) ret += ch;
//		else {
//			if (ch == '(') {
//				ret += ch;
//				ret += ')';
//			}
//			else if (ch == ')') {
//				ret += '(';
//				ret += ch;
//			}
//			else if (ch == '[') {
//				ret += ch;
//				ret += ']';
//			}
//			else {
//				ret += '[';
//				ret += ch;
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}