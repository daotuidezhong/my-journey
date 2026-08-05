#include<iostream>
using namespace std;
//ÖÕÖ¹µãÈ·¶¨
int arr[100] = { 0 };
int main() {
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int arrpos = i;
		for (int j = i; j < n; j++) {
			if (arr[arrpos] < arr[j]) {
				int temp = arr[arrpos];
				arr[arrpos] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i]<<" ";
	}


	return 0;
}