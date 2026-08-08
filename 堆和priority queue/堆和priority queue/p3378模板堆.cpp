#include<iostream>
#include<queue>
using namespace std;
int n;
int main() {
	priority_queue<int,vector<int>,greater<int>> heap;
	cin >> n;
	while (n--) {
		int op; cin >> op;
		if (op == 1) {
			int x; cin >> x;
			heap.push(x);
		}
		else if (op == 2) {
			cout << heap.top() << endl;
		}
		else if (op == 3) {
			heap.pop();
		}
	}
	return 0;
}