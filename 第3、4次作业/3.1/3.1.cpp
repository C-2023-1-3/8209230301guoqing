#include<iostream>
#include"maxmin.h"
using namespace std;
int main() {
	int a, b;
	cout << "������������:";
	cin >> a >> b;
	cout << "�������������Լ��Ϊ:"<<maxyue(a,b);
	cout << "������������С������Ϊ:" << minbei(a, b);
}
