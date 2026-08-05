

//递归展开图就是一棵树，递归的过程其实就是在对这棵树执行深度优先遍历





//#include<iostream>   
//#include<vector>
//using namespace std;
//const int N = 1e5 + 10;
//vector<int> tree[N];
//bool st[N];
//void dfs(int u) {
//	cout << u << " ";
//	st[u] = true;
//	for (auto v : tree[u]) {
//		if (!st[v]) {
//			dfs(v);//例如第一个进来的是1节点，当处理到后面的时候dfs（1）并没有结束，而是进入了dfs（2）中，等dfs（2）结束后最终再继续dfs（1）的工作
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b; cin >> a >> b;
//		tree[a].push_back(b);
//		tree[b].push_back(a);
//	}
//	dfs(1);
//	return 0;
//}





//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 10;
//vector<int> tree[N];
//bool st[N];
//void dfs(int u) {
//	st[u] = true;
//	cout << u << " ";
//	for (auto v : tree[u]) {
//		if (!st[v]) {
//			dfs(v);
//		}
//	}
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b; cin >> a >> b;
//		tree[a].push_back(b);
//		tree[b].push_back(a);
//	}
//	dfs(1);
//	return 0;
//}



#include<iostream>
using namespace std;
#include<vector>
const int N = 1e5 + 10;
vector<int> tree[N];
bool st[N];
void dfs(int u) {
	st[u] = true;
	cout << u << " ";
	for (auto v : tree[u]) {
		if (!st[v]) {
			dfs(v);
		}
	}
}
int main() {
	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int a, b; cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(1);
	return 0;
}