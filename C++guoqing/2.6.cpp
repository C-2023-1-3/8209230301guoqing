#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, i, j;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	c = max(a, b);
	for (i = 1; i <= c; i++) {
		if (a % i == 0 && b % i == 0) {
			j = i;
		}
	}i = a * b / j;
	cout << "最小公倍数为:" << i << "最大公因数为:" << j << endl;
}