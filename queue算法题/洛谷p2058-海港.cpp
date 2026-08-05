//#include<iostream>
//#include<queue>
//using namespace std;
//typedef pair<int, int> PII;
//int t, n,k;
//queue<PII> p;
//const int N = 1e5 + 10;
//int cnt[N], kinds;
//
//int main() {
//	cin >> n;
//	while (n--) {
//		cin >> t; cin >> k;
//		for (int i = 1; i <= k; i++) {
//			int x; cin >> x;
//			p.push({ t,x });
//			if (cnt[x]++ == 0) kinds++;
//		}
//		while (p.size() && p.back().first - p.front().first >= 86400) {
//			PII temp = p.front(); p.pop();
//			int x = temp.second;
//			if (cnt[x]-- == 1) kinds--;
//		}
//		cout << kinds << endl;
//	}
//	
//	return 0;
//}