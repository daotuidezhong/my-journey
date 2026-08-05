//#include<iostream>
//using namespace std;
////多态分为两类
////1、静态多态：函数重载和运算符重载属于静态多态，复用函数名
////2、动态多态：派生类和虚函数实现运行是多态
//
////静态多态和动态多态的区别
////1、静态多态的函数地址早绑定-编译阶段确定函数地址
////动态多态的函数地址晚绑定-运行阶段确定函数地址
//class animal {
//public:
//	//speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器字编译的时候就不能确定函数调用了
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//class cat :public animal {
//public:
//	//这里virtual可加可不加
//	void speak() {
//		cout << "小猫在说话" << endl;
//	}
//};
//class dog :public animal {
//	void speak() {
//		cout << "小狗在说话" << endl;
//	}
//};
////我们希望传入什么对象，那么就调用什么对象的函数
////如果函数地址再编译阶段就能确定，那么就是静态联编
////如果函数地址再运行阶段才能确定，就是动态联编
//void anispeak(animal &animal) {
//	animal.speak();
//}
////多态要满足条件：
////1、有继承关系
////2、子类重写父类中的虚函数（！不是重载）
//// //重写：函数返回值类型 函数名 参数列表 完全一致称为重写
////多态使用：
////父类指针或引用指向子类对象
//void test1() {
//	cat cat;
//	anispeak(cat);
//	dog dog;
//	anispeak(dog);
//
//}
//int main() {
//	test1();
//	return 0;
//}