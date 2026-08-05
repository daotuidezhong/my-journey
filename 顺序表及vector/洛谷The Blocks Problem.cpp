//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//typedef pair<int, int> PII;
//int n;
//const int N = 30;
//vector<int> p[N];
//PII find(int x) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < p[i].size(); j++) {//p[i]
//			if (p[i][j] == x) {
//				return { i,j };
//			}
//		}
//	}
//}
//void clear(int x1,int y1) {
//	for (int i = y1+1; i < p[x1].size(); i++) {//y1+1
//		int t = p[x1][i];
//		p[t].push_back(t);
//	}
//	p[x1].resize(y1 + 1);
//}
//void move(int x, int y, int x1) { //a及其以上的都需要移动
//	for (int i = y; i < p[x].size(); i++) {
//		p[x1].push_back(p[x][i]); //move不能是x，要移动到新的位置
//	}
//	p[x].resize(y);
//}
//int main() {
//	//初始化
//	cin >> n; //先输入n
//	for (int i = 0; i < 10; i++) {
//		p[i].push_back(i);
//	}
//	string s1, s2;
//	int a, b;
//	
//
//	while (cin >> s1 >> a >> s2 >> b) {
//		PII pa = find(a);
//		int x1 = pa.first, y1 = pa.second;
//		PII pb = find(b);
//		int x2 = pb.first, y2 = pb.second;
//		if (x1 == x2) continue; //不能用break要不然会结束整个循环
//		if (s1 == "move") {
//			clear(x1,y1);
//		}
//		if (s2 == "onto") {
//			clear(x2,y2);
//		}
//		move(x1, y1, x2);
//
//	}
//	for (int i = 0; i < n; i++) {
//		cout << i << ":";
//		for (int j = 0; j < p[i].size(); j++) {
//			cout <<" "<< p[i][j];
//		}
//		cout << endl;//排版问题
//	}
//	
//	return 0;
//}