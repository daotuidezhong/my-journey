#include<iostream>
#include<deque>
using namespace std;
struct node {
	int x, y, z;
};
int main() {
	deque<node> q;
	//Í·²å
	for (int i = 1; i <= 5; i++) {
		q.push_front({ i,i * 2,i * 3 });
	}
	//Í·É¾
	while (q.size()) {
		auto t = q.front(); q.pop_front();
		cout << t.x << " " << t.y << " " << t.z << endl;
	}
	//Î²²å
	for (int i = 1; i <= 5; i++) {
		q.push_back({ i,i * 2, i * 3 });
	}
	//Î²É¾
	while (q.size()) {
		auto t = q.back(); q.pop_back();
		cout << t.x << " " << t.y << " " << t.z << endl;
	}
	return 0;
}