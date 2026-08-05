#include<iostream>
using namespace std;
template<typename T>
void myswap(T&a,T&b) {
	T temp=a;
	a = b;
	b = temp;
}
template<typename T>
void mysort(T arr, int len) {
	for (int i = 0; i < len; i++) {
		int max = i;//从最大的开始记录
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			myswap(arr[max], arr[i]);
		}
	}
}
template<typename T>
void printarr(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test1() {
	char chararr[] = "fedad";
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr, num);
	printarr(chararr, num);
}
void test2() {
	int intarr[] = { 4,25,8,3 };
	int num = sizeof(intarr) / sizeof(int);
	mysort(intarr, num);
	printarr(intarr, num);
}
int main() {
	test1();
	test2();
	return 0;
}