//#include<iostream>
//#include<queue>
//using namespace std;
//typedef long long LL;
//LL sum;
//int n, k;
//int main() {
//    cin >> n >> k;
//    priority_queue<int> heap;
//    for (int i = 0; i < n; i++) {
//        int x; cin >> x;
//        sum += x;  //奇数可以不用单独储存，直接放入sum，后续进行减的操作而不是加的操作
//        if (x % 2 == 0) heap.push(x);
//    }
//    while (heap.size() && k--) {
//        int t = heap.top() / 2; heap.pop();
//        sum -= t;
//        if (t % 2 == 0) {
//            heap.push(t);
//        }
//    }
//    cout << sum;
//    return 0;
//}