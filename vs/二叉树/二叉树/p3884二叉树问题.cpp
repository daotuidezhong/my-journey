//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 110;
//vector<int> tree[N];
//int n;
//int fa[N];
//int dist[N];
//int dfs(int root) {
//	int ret = 0;
//	for (auto u : tree[root]) {
//		ret = max(ret, dfs(u));
//	}
//	return ret + 1;
//}
//int bfs() {
//	queue<int> q;
//	q.push(1);
//	int ret = 0;
//	while (q.size()) {
//		int siz = q.size();
//		ret = max(ret, siz);
//		while (siz--) {
//			int u = q.front(); q.pop();
//			for (auto v : tree[u]) {
//				q.push(v);
//			}
//		}
//	}
//	return ret;
//}
//int main() {
//	//第一问求深度
//	cin >> n;
//	//用vector数组存树，因为已确认父子关系，所以不需要双向存储
//	for (int i = 1; i < n; i++) {
//		int u, v; cin >> u >> v;
//		tree[u].push_back(v);
//		fa[v] = u;
//	}
//	cout << dfs(1) << endl;
//
//	//第二问求最大宽度
//	cout << bfs() << endl;
//
//	//第三问求任意两点距离
//	int x, y;
//	cin >> x >> y;
//
//	while (x != 1) {
//		dist[fa[x]] = dist[x] + 1;
//		x = fa[x];
//	}
//	int len = 0;
//	while (y != 1 && dist[y] == 0) {
//		len++;
//		y = fa[y];
//	}
//	cout << 2 * dist[y] + len << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 110;
//vector<int> tree[N];
//queue<int> q;
//int n;
//int fa[N];
//int dist[N];
//int dfs(int root) {
//	int ret = 0;
//	for (auto u : tree[root]) {
//		ret = max(ret, dfs(u));
//	}
//	return ret + 1;
//}
//int bfs() {
//	q.push(1);
//	int ret = 0;
//	while (q.size()) {
//		int siz = q.size();
//		ret = max(ret, siz);
//		while (siz--) {
//			int u = q.front(); q.pop();
//			for (auto v : tree[u]) {
//				q.push(v);
//			}
//		}
//	}
//	return ret;
//}
//int main() {
//	//存树，不是二叉树，是最小父子关系的树
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		int u, v; cin >> u >> v;
//		tree[u].push_back(v);
//		fa[v] = u;
//	}
//	//第一问：求深度
//	cout << dfs(1) << endl;
//
//	//第二问：求宽度
//	cout << bfs() << endl;
//
//	//第三问：求距离
//	int x, y;
//	cin >> x >> y;
//
//	while (x != 1) {
//		dist[fa[x]] = dist[x] + 1;
//		x = fa[x];
//	}
//	
//	int len = 0;
//	while (y != 1 && dist[y] == 0) {
//		len++;
//		y = fa[y];
//	}
//
//	cout << 2 * dist[y] + len << endl;
//	return 0;
//}