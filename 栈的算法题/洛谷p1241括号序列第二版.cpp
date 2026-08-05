//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 110;
//bool s[N];//标记
//int main() {
//	string str; cin >> str;
//	stack<int> stk;//储存当前的下标
//	for (int i = 0; i < str.size(); i++) {
//		char ch = str[i];
//		if (ch == '(' || ch == '[') stk.push(i);
//		else {
//			//遇到了右括号
//			if (stk.empty()) continue;//遇到只有右括号的情况!!!!!!!!!!!!!!!
//			int t = stk.top();
//			char left = str[t];
//
//			if ((left == '(' && ch == ')') || (left == '[' && ch == ']')) {
//				s[t] = s[i] = true;
//				stk.pop();
//			}
//		}
//	}
//	string ret = "";
//	for (int i = 0; i < str.size(); i++) {
//		char ch1 = str[i];
//		if (s[i]) ret+=ch1; //这里错了，不是continue，是把每一个ch1加上去
//		else {
//			if (ch1 == '(') {
//				ret += ch1;
//				ret += ')';
//			}
//			else if(ch1==')') {
//				ret += '(';
//				ret += ch1;
//			}
//			else if (ch1 == '[') {
//				ret += ch1;
//				ret += ']';
//			}
//			else if (ch1 == ']') {
//				ret += '[';
//				ret += ch1;
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}