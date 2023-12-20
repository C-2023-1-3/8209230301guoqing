#include<iostream>
using namespace std;
void swap(double &a,double &b) {
	double temp = a;
	a = b;
	b = temp;
}
int main() {
	
	const int listSize = 10;
	double list[listSize];
	for(int i = 0; i < listSize; i++) {
		cin >> list[i];
	}
	for(int n = 0; n < listSize-1; n++) {
		for (int j = 0; j < listSize - 1 - n; j++) {
			if (list[j] > list[j + 1])
			{	swap(list[j],list[j+1]);
			}
		}
	}
	for(int i = 0; i < listSize; i++) {
		cout<<list[i]<<" ";
	}
}