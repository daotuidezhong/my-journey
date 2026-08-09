//#include<iostream>
//#include<queue>
//using namespace std;
//int main() {
//    int n, m, k;
//    priority_queue<int> heap;
//    cin >> n >> m >> k;
//    for (int i = 0; i < n; i++) {
//        int x; cin >> x;
//        heap.push(x);
//        if (heap.size() > k) heap.pop();
//    }
//    while (m--) {
//        int op; cin >> op;
//        if (op == 1) {
//            int x; cin >> x;
//            heap.push(x);
//            if (heap.size() > k) heap.pop();
//        }
//        if (op == 2) {
//            if (heap.size() == k) cout << heap.top() << endl;
//            else cout << "-1" << endl;
//        }
//    }
//    return 0;
//}