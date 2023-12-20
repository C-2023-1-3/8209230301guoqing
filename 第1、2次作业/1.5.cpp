#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double t, T;
	cout << "请输入华氏温度:";
	cin >> T;
	t = (T- 32) * 5 / 9;
	cout << setprecision(2) << "摄氏温度为" << t << endl;
}