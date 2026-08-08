//#include<iostream>
//#include<queue>
//using namespace std;
//int a[10] = { 1,41,23,10,11,2,-1,99,15,0 };
//struct node {
//	int a, b, c;
//	//按照b为基准创建大根堆
//	/*bool operator< (const node& x) const {
//		return b < x.b;
//	}*/
//	//按照b为基准创建小根堆
//	bool operator< (const node& x) const {
//		return b > x.b;
//	}
//};
//void test2() {
//	priority_queue<node> heap;
//	for (int i = 0; i <= 5; i++) {
//		heap.push({ i + 5,i + 1, i + 2 });
//	}
//	while (heap.size()) {
//		node t = heap.top(); heap.pop();
//		cout << t.a << " " << t.b << " " << t.c << " " << endl;
//	}
//}
//void test1() {
//	priority_queue<int> heap1;//默认是大根堆
//	//priority_queue<数据类型,存储结构,比较方式>
//	//less和greater
//
//	//大根堆，用less
//	priority_queue<int, vector<int>, less<int>> heap2;
//	//小根堆，用greater
//	priority_queue<int, vector<int>, greater<int>> heap3;
//	for (int i = 0; i < 10; i++) {
//		heap2.push(a[i]);
//		heap3.push(a[i]);
//	}
//	cout << "大根堆:";
//	while (heap2.size()) {
//		cout << heap2.top() << " ";
//		heap2.pop();
//	}
//	cout << endl;
//	cout << "小根堆：";
//	while (heap3.size()) {
//		cout << heap3.top() << " ";
//		heap3.pop();
//	}
//}
//int main() {
//	//priority_queue<int> heap; //默认创建的是大根堆
//	//for (int i = 0; i < 10; i++) {
//	//	heap.push(a[i]);
//	//}
//	//while (heap.size()) {
//	//	cout << heap.top() << " ";
//	//	heap.pop();
//	//}
//
//	test1();
//	test2();
//	return 0;
//}