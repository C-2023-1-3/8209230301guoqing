#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形三边长a,b,c" << endl;
	cin >> a >> b >> c;
	if (a+b>c&&a+c>b&&b+c>a) {
		if (a == b || a == c || b == c) {
			cout << "这三边构成等腰三角形" << endl;
		}
		else {
			cout << "这三边能构成三角形，但不是等腰三角形" << endl;
		}
	}
	else {
		cout << "这三边不能构成三角形" << endl;
	}

}