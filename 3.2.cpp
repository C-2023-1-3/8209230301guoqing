#include<iostream>
using namespace std;
bool is_prime(int num) {
	int n;
	for (n = 2; n < num; n++) {
		if (num % n == 0)
			break;
	}if (num == n) {
		return true;
	}
	else
		return false;
}
int main() {
	int i,j=0;
		for (i = 2; j <= 200; i++) {
			if (is_prime(i) == 1) {
				j++;
				cout << i << "\t";
				if (j % 10 == 0) {
					cout << endl;
				}
			}
		}
}