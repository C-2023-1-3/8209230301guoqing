#include<iostream>
using namespace std;
int maxyue(int n1,int n2) {
	int j;
	int num = n1 < n2 ? n1 : n2;
	for (j = num; j >= 1; j--) {
		if (n1 % j == 0 && n2 % j == 0)
			break;
	}return j;
}
int minbei(int n1,int n2) {
	int num = n1 > n2 ? n1 : n2;
	int n = num;
	while (1) {
		if (n % n1 == 0 && n % n2 == 0)
			break;
		n += num;
	}return n;
}
