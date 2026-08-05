//#include<iostream>
//#include<queue>
//using namespace std;
//const int N = 1100;
//int m, n;
//bool st[N];//判断当前位置的元素有没有存在于内存中
//queue<int> q;//内存大小
//int main() {
//	cin >> m;
//	cin >> n;
//	int cnt = 0;
//	while (n--) {
//		int x; cin >> x;
//		if (st[x]) continue;
//		
//		else {
//			q.push(x);
//			st[x] = true;
//			cnt++;
//			if (q.size() > m) {
//				st[q.front()] = false;
//				q.pop();
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}