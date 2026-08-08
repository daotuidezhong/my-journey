//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n;//元素数量
//int heap[N];
//void down(int parent) {
//	int child = parent * 2;//父节点的左孩子
//	while (child <= n) {
//		if (child + 1 <= n && heap[child + 1] > heap[child]) child++;
//		if (heap[parent] > heap[child]) return;
//		parent = child;
//		child = parent * 2;
//	}
//}
//int main() {
//	return 0;
//}