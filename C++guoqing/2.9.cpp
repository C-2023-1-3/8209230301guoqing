#include<iostream>
using namespace std;
int main() {
	int i,s=2,d = 1;
	for (i = 2; s <= 100; d++) {
		i *= 2;
		s = s + i;

	}
	cout <<"总天数为:" << d-1 << endl;
	cout << "平均每天花:" << 0.8*(s - i) / (d - 1) <<"元" << endl;
}