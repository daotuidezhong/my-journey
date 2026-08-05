////链表前向星的本质是用链表存储所有的孩子，链表是用数组模拟实现的,本质是链表的头插操作
//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int h[N], ne[2 * N], e[2 * N], id;//两倍是因为存储两个节点时需要两个都互相存储
////把b头插到a的后面
//void add(int a, int b) {
//	id++;
//	e[id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b; cin >> a >> b;
//		add(a, b); add(b, a);
//	}
//	return 0;
//}