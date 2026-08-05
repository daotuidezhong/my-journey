//#include<iostream>
//#include<vector>
//#include<queue>
//const int N = 1e5 + 10;
//using namespace std;
//vector<int> tree[N];
//queue<int> q;
//bool st[N];
//void bfs() {
//	q.push(1);
//	st[1] = true;
//	while (q.size()) {
//		int u = q.front(); q.pop();
//		cout << u << " ";
//		for (auto v : tree[u]) {
//			if (!st[v]) {
//				q.push(v);
//				st[v] = true;
//			}
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i < n; i++) {
//		int a, b; cin >> a >> b;
//		tree[a].push_back(b);
//		tree[b].push_back(a);
//	}
//	bfs();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<vector>
//#include<queue>
//const int N = 1e5 + 10;
//vector<int> tree[N];
//queue<int> q;
//bool st[N];
//
//void bfs() {
//	q.push(1);
//	st[1] = true;
//	while (q.size()) {
//		int u = q.front(); q.pop();
//		cout << u << " ";
//		for (auto v : tree[u]) {
//			if (!st[v]) {
//				q.push(v);
//				st[v] = true;
//			}
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i < n; i++) {
//		int a, b; cin >> a >> b;
//		tree[a].push_back(b);
//		tree[b].push_back(a);
//	}
//	bfs();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//#include<vector>
//#include<queue>
//const int N = 1e5 + 10;
//vector<int> tree[N];
//queue<int> q;
//bool st[N];
//void bfs() {
//	q.push(1);
//	st[1] = true;
//	while (q.size()) {
//		int u = q.front(); q.pop();
//		cout << u << " ";
//		for (auto v : tree[u]) {
//			if (!st[v]) {
//				q.push(v);
//				st[v] = true;
//			}
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i < n; i++) {
//		int a, b; cin >> a >> b;
//		tree[a].push_back(b);
//		tree[b].push_back(a);
//	}
//	bfs();
//	return 0;
//}