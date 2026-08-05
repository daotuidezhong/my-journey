//#include<iostream>
//using namespace std;
//const int N = 1e5+10;
//const int M = 1e6+10;
//int h, id, ne[N], e[N];
//int mp[M];
//int main() {
//	int q; cin >> q;
//	id++;
//	e[id] = 1;
//	mp[1] = id;
//	while (q--) {
//		int op, x, y;
//		cin >> op >> x;
//		int p = mp[x];//获取x的下标
//		if (op == 1) {
//			cin >> y;
//			id++;
//			e[id] = y;
//			ne[id] = ne[p];
//			ne[p] = id;
//			mp[y] = id;/////////
//		}
//		else if (op == 2) {
//			cout << e[ne[p]] << endl;
//		}
//		else {
//			ne[p] = ne[ne[p]];
//		}
//	}
//	return 0;
//}