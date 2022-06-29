#include<iostream>
using namespace std;

//函数重载
//int sum(int a, int b) {
//	return a + b;
//}
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//void func(int a, double b) {
//	cout << "func(int a, double b)" << endl;
//}
//void func(double a,int b) {
//	cout << "func(double a, int b)" << endl;
//}

//会报错，无法区分仅返回值不同的函数
//int func() {
//	return 0;
//}
//double func() {
//	return 1.0;
//}

void display() {
	cout << "display()" << endl;
}
//display_int
void display(int a,double b) {
	cout << "display(int a)" <<a<< endl;
}

//display_int
void display(double a,long b) {
	cout << "display(double a)" <<a<< endl;
}
//display_long
void display(long a) {
	cout << "display(long a)" <<a<< endl;
}
int main() {
	/*cout << sum(10, 20) << endl;
	cout << sum(10, 20, 30) << endl;*/
	/*func(10, 10.0);
	func(10.0, 10);*/
//	func();
	display();
	display(10);
	display(10, 10.0);
	display(10.0, 10);
	display(10L);
	display(10.0);
}