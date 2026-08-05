//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//const int n = 10;
//struct node {
//	int a, b;
//	string s;
//};
//void print(vector<int> &a) {
//	//通过size遍历
//	/*for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;*/
//
//	//通过begin迭代器方式遍历  vector<int>::iterator可用auto替换
//	/*for (auto it = a.begin(); it != a.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;*/
//
//	//语法糖-范围for 把a中的元素从前往后赋值给x for中的内容相当于迭代器方法遍历
//	for (auto x : a) {
//		cout << x << " ";
//	}
//	cout << endl;
//}
//int main() {
//	//1.创建vector
//	vector<int> a1;//创建了一个名字为a1的空可变长数组，里面都是int类型的数据
//	
//	vector<int> a3(n, 2);//创建了一个大小为10的可变长数组，里面的值都初始化为2
//	vector<int> a4 = { 1,2,3,4 };//初始化列表的创建方式
//	//vector里面就可以存放我们见过的所有的数据类型，甚至是STL本身
//	vector<string> a5;//存字符串
//	vector<node> a6;//存结构体
//	vector<vector<int>> a7;//创建了一个二维的可变长数组
//
//	vector<int> a2(n);//创建了一个大小为10的可变长数组，里面的值默认都是0
//	vector<int> a8[n];//创建了一个大小为n的vector数组
//	
//	
//	//2.size/empty
//	/*print(a3);
//	if (a4.empty()) {
//		cout << "空" << endl;
//	}
//	else cout << "不空" << endl;*/
//
//
//	//3.push_back/pop_back
//	for (int i = 0; i < 5; i++) {
//		a1.push_back(i);
//		print(a1);
//	}
//	while (!a1.empty()) {
//		print(a1);
//		a1.pop_back();
//	}
//
//	//insert/erase
//	//insert第一个参数要传入迭代器
//	a3.insert(a3.begin(), 100);
//	a3.insert(a3.begin(), 2, 1000);
//	print(a3);
//	//删除也是迭代器
//	a3.erase(a3.begin());
//	print(a3);
//
//	//4.front/back
//	cout << a4.front() << " " << a4.back() << " " << endl;
//
//
//	//5.resize
//	a4.resize(6);//resize扩充空间后，未赋值的直接变为零
//	print(a4);
//	return 0;
//} 