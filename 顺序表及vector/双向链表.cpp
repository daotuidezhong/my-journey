#include<iostream>
using namespace std;
const int n = 1e6 + 10;
int e[n], pre[n], ne[n], id, h,mp[n];
//遍历
void print() {
	for (int i = ne[h]; i; i = ne[i]) {
		cout << e[i] << " ";
	}
	cout << endl;
}

//头插
void push_front(int x) {
	id++;
	e[id] = x;
	mp[x] = id;

	pre[id] = h;
	ne[id] = ne[h];

	pre[ne[h]] = id;//两个不能反过来，因为ne[h]=id ,pre[ne[h]]=id相当于pre[id]=id导致无限循环
	ne[h] = id;
	
	
}
//查找
int find(int p) {
	return mp[p];
}
//任意位置后插入
void insert_back(int p, int x) {
	id++;
	e[id]=x;
	mp[x] = id;

	pre[id] = p;
	ne[id] = ne[p];

	pre[ne[p]] = id;
	ne[p] = id;
	
	

}
//任意位置前插入
void insert_front(int p,int x) {
	id++;
	e[id] = x;
	mp[x] = id;

	pre[id] = pre[p];
	ne[id] = p;

	ne[pre[p]] = id;
	pre[p] = id;

}
//在任意p位置删除
void erase(int p) {
	if (ne[p]!=0) {
		mp[e[p]] = 0;
		pre[ne[p]] = pre[p];
		ne[pre[p]] = ne[p];
	}
	else {
		cout << "无法删除" << endl;
	}
}
int main() {
	for (int i = 1; i <= 5; i++) {
		push_front(i);
		print();
	}
	cout << find(1)<<endl;
	cout << find(0) << endl;

	insert_front(2, 100);
	print();
	insert_front(3, 200);
	print();
	erase(7);
	print();
	return 0;
}