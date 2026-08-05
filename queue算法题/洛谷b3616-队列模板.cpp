//#include<iostream>
//#include<queue>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	queue<int> q;
//	while (n--) {
//		int num = 0,x; cin >> num;
//		if (num == 1) {
//			cin >> x;
//			q.push(x);
//		}
//		else if (num == 2) {
//			if (q.size())q.pop();
//			else cout << "ERR_CANNOT_POP"<<endl;
//		}
//		else if (num == 3) {
//			if (q.size()) cout << q.front()<<endl;
//			else cout << "ERR_CANNOT_QUERY" << endl;
//		}
//		else if (num == 4) {
//			cout << q.size() << endl;
//		}
//	}
//	return 0;
//}