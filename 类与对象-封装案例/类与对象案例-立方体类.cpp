//#include<iostream>
//using namespace std;
//class cube {
//public:
//	//设置长
//	void setl(int l) {
//		my_l = l;
//	}
//	//获取长
//	int getl() {
//		return my_l;
//	}
//	//设置宽
//	void setw(int w) {
//		my_w = w;
//	}
//	//获取宽
//	int getw() {
//	return my_w;
//}
//	//设置高
//	void seth(int h) {
//		my_h = h;
//	}
//	//获取高
//	int geth() {
//		return my_h;
//	}
//	//计算体积
//	int caculatecube() {
//		return my_h * my_l * my_w;
//	}
//	bool issame1(cube& c1) {
//		if ((c1.getl() == my_l) && (c1.getw() == my_w && (c1.geth() == my_h))) {
//			return true;
//		}
//		return false;
//	}
//private:
//	int my_l;
//	int my_w;
//	int my_h;
//};
//bool issame(cube& c1, cube& c2) {
//	if ((c1.getl() == c2.getl()) && (c1.getw() == c2.getw()) && (c1.geth() == c2.geth())) {
//		return true;
//	}
//	return false;
//}
//int main() {
//	cube c1;
//	c1.setl(10);
//	c1.seth(10);
//	c1.setw(10);
//	cout<<c1.caculatecube()<<endl;
//	cube c2;
//	c2.setl(10);
//	c2.seth(10);
//	c2.setw(10);
//	cout << c2.caculatecube() << endl;
//	bool ret = issame(c1, c2);
//	if (ret) {
//		cout << "根据全局函数两cube相等" << endl;
//	}
//	bool ret2 = c1.issame1(c2);
//	if (ret) {
//		cout << "根据成员函数两cube相等" << endl;
//	}
//	return 0;
//}