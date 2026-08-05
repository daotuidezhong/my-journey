#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef pair<int, int> PII;
const int N = 30;
vector<int> p[N];
int n;
PII find(int x) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p[i].size(); j++) {
			if (p[i][j] == x) {
				return{ i,j };
			}
		}
	}
}
void clean(int x,int y) {
	for (int i = y+1; i < p[x].size(); i++) {//要将a上的元素归位
		int t = p[x][i];//用一个变量保存某一元素上方的值
		p[t].push_back(t);
	}
	p[x].resize(y+1);
}
void move(int x1,int y1,int x2) {
	for (int i = y1; i < p[x1].size(); i++) {
		int t = p[x1][i];
		p[x2].push_back(t);
	}
	p[x1].resize(y1);
}
int main() {
	cin >> n;
	string s1, s2;
	int a, b;
	for (int i = 0; i < 10; i++) {
		p[i].push_back(i);
	}
	while (cin >> s1 >> a >> s2 >> b) {
		
		PII pa = find(a);
		int x1 = pa.first, y1 = pa.second;
		PII pb = find(b);
		int x2 = pb.first, y2 = pb.second;
		if (x1 == x2) continue;
		if (s1 == "move") {
			clean(x1,y1);
		}
		if (s2 == "onto") {
			clean(x2,y2);
		}
		move(x1, y1, x2);
	}
	for (int i = 0; i < 10; i++) {
		cout << i << ":";
		for (int j = 0; j < p[i].size(); j++) {
			cout <<" "<< p[i][j];
		}
		cout << endl;
	}
	return 0;
}