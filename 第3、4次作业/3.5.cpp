#include<iostream>
using namespace std;
int peach(int dat) {
	int sum = 0;
	if (dat == 10) {
		return 1;
	}
	else {
		sum = (peach(dat + 1) + 1) * 2;
	}
		if (dat == 1) {
			cout << "第一天摘了" << sum << "个桃子" << endl;
		}
		return sum;
	}
int main() {
	peach(1);
}