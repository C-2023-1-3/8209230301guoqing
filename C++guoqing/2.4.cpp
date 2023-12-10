#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cout << "请输入两个数和一个运算符" << endl;
	cin >> a >> b >> c;
	switch (c) {
	case'+':cout << a + b << endl; break;
	case'-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/': if (b == 0) {
		cout << "除数不能为0" << endl;
	}
		   else {
		cout << a / b << endl;
	}break;
	default:cout << "运算符不合法" << endl;
	
	}
	
}