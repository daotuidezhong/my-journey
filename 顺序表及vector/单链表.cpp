//#include<iostream>
//using namespace std;
//const int n = 1e5 + 10;
// 现在实现的单链表也是循环链表，末位置指向哨兵位，即成环
//int e[n], ne[n], h, id;
//int mp[n];//mp[i]表示i这个位置上存储的下标
////打印操作
//void print() {
//	for (int i = ne[h]; i; i = ne[i]) {
//		cout << e[i] << " ";
//	}
//	cout << endl;
//}
////进行头插操作
//void push_front(int x) {
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	ne[id] = ne[h];
//	ne[h] = id;
//}
//int find(int x) {
//	//解法一:用遍历解决
//	/*for (int i = ne[h]; i; i = ne[i]) {
//		if (e[i] == x) {
//			return i;
//		}
//	}
//	return 0;*/
//
//	//解法二 采用多创建一个数组，时间复杂度下降。 但是有局限性：1、数组的值不能过大，比如存1e9这个数，不能开这么大的数组
//	//2、链表中不能存相同的值，不然下标不明确
//	return mp[x];
//}
////在任意位置插入元素 p为位置，x为值
//void insert(int p,int x) {
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	ne[id] = ne[p];
//	ne[p] = id;
//}
////在任意位置删除元素
//void erase(int p) {
//	if (ne[p]) {
//		mp[e[ne[p]]] = 0;//下次寻找该元素时会返回0，即代表不存在该元素了，并不是删除了元素，而是将它跳过
//		ne[p] = ne[ne[p]];
//	}
//	else {
//		cout << "无法删除" << endl;
//	}
//}
//int main() {
//	for (int i = 1; i <= 5; i++) {
//		push_front(i);
//		print();
//	}
//	//cout << find(1) << endl;
//	//cout << find(2) << endl;
//
//	insert(1,100);
//	print();
//	insert(2, 1000);
//	print();
//	cout << find(1000) << endl; //链表寻找操作不要看打印值的顺序，要看next数组的数据
//	erase(1);
//	print();
//	erase(2);
//	print();
//	return 0;
//}