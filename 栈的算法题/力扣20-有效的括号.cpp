//#include<iostream>
//#include<stack>
//using namespace std;
//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> st;
//        for (auto ch : s) {
//            if (ch == '(' || ch == '{' || ch == '[') {
//                st.push(ch);
//            }
//            else {
//                if (st.empty()) return false;
//                char left = st.top();
//                if (ch == ')' && left != '(') return false;
//                if (ch == '}' && left != '{') return false;
//                if (ch == ']' && left != '[') return false;
//                st.pop();
//            }
//        }
//        return st.empty();
//    }
//};