#include<iostream>
#include"maxmin.h"
using namespace std;
int main() {
	int a, b;
	cout << "请输入两个数:";
	cin >> a >> b;
	cout << "这两个数的最大公约数为:"<<maxyue(a,b);
	cout << "这两个数的最小公倍数为:" << minbei(a, b);
}
