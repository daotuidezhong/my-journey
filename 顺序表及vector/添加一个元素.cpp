//#include<iostream>
//using namespace std;
////该程序目前有bug因为可能数组存满
////但是要通过自己判断
//const int N = 1e6 + 10;
//int arr[N];
//int n;
////头插
//void push_front(int x) {
//	for (int i = n; i >0; i--) {
//		arr[i + 1] = arr[i];
//	}
//	arr[1] = x;
//	n++;
//}
////尾插
//void push_back(int x) {
//	arr[++n] = x;
//}
////输出
//void print_arr() {
//	for (int i = 1; i <= n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
////任意位置插入
////positon的位置也要发合法，因为顺序表是连续的
//void insert(int x,int position) {
//	for (int i = n; i >= position; i--) {
//		arr[i + 1] = arr[i];
//	}
//	arr[position] = x;
//	n++;
//}
////头删操作
//void pop_front() {
//	for (int i = 2; i <= n; i++) {
//		arr[i - 1] = arr[i];
//	}
//	n--;
//}
////尾删操作
//void pop_back() {
//	n--;
//}
////任意位置删除
//void erase(int position) {
//	for (int i = position+1; i <= n; i++) {
//		arr[i - 1] = arr[i];
//	}
//	n--;
//}
////按值查找
//int findvalue(int value) {
//	for (int i = 1; i <= n; i++) {
//		if (arr[i] == value) {
//			return i;
//		}
//	}
//	return 0;
//}
////按位查找
//int findpositon(int position) {
//	return arr[position];
//}
//int main() {
//	push_back(3);
//	print_arr();
//	push_back(1);
//	print_arr();
//	push_back(9);
//	print_arr();
//	push_back(5);
//	print_arr();
//	push_front(4);
//	print_arr();
//	insert(2, 3);
//	print_arr();
//	cout << "删除操作" << endl;
//	pop_front();
//	print_arr();
//	pop_back();
//	print_arr();
//	erase(3);
//	print_arr();
//	cout << "查找功能" << endl;
//	for (int i = 1; i <= 10; i++) {
//		cout<<findvalue(i)<<endl;
//	}
//	cout << findpositon(3);
//	return 0;
//}