#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double cel;
	cout << "���û����¶ȱ�ʾһ���¶�:";
	cin >> cel;
	cout << "�������϶ȱ�ʾΪ:" << fahrenheit_to_cels(cel) <<endl;
   double fah;
   cout << "���������¶ȱ�ʾһ���¶�:"; 
   cin >> fah;
   cout << "���Ļ��϶ȱ�ʾΪ:" << celsius_to_fah(fah);
}