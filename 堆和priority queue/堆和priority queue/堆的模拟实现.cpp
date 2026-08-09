//所以堆特别适合这种问题：
//
//元素不断增加、删除，但我又总想知道当前最大值 / 最小值。


//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int heap[N];
//void up(int child) {
//	int parent = child / 2;
//	while (parent >= 1&&heap[child]>heap[parent]) {
//		swap(heap[child], heap[parent]);
//		child = parent;
//		parent = child / 2;
//	}
//}
//void down(int parent) {
//	int child = parent * 2;//右孩子
//	while (child <= n) {
//		if ((child + 1 <= n) && (heap[child + 1] > heap[child])) child++;
//		if (heap[parent] > heap[child]) return;
//		parent = child;
//		child = parent * 2;
//	}
//}
////插入元素
//void push(int x) {
//	heap[++n] = x;
//	up(n);
//}
////删除堆顶元素
//void pop() {
//	swap(heap[1], heap[n]);
//	n--;
//	down(n);
//}
////查询堆顶元素
//int top() {
//	return heap[1];
//}
////返回堆的大小
//int size() {
//	return n;
//}
//int main() {
//	//测试堆
//	int a[10] = { 1,41,23,10,11,2,-1,99,15,0 };
//	for (int i = 0; i < 10; i++) {
//		push(a[i]);
//	}
//	while (size()) {
//		cout << top() << endl;
//		pop();
//	}
//	return 0;
//}