#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double cel;
	cout << "请用华氏温度表示一个温度:";
	cin >> cel;
	cout << "它的摄氏度表示为:" << fahrenheit_to_cels(cel) <<endl;
   double fah;
   cout << "请用摄氏温度表示一个温度:"; 
   cin >> fah;
   cout << "它的华氏度表示为:" << celsius_to_fah(fah);
}