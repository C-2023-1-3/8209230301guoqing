#include<iostream>
using namespace std;
class Point {
private:int x=60, y=80;
public:
	void setPoint();
	void display();
};
void Point::setPoint() {
	int i, j;
	cout << "������i,j:";
	cin >> i >> j;
	x= 60 + i;
	y= 80 + j;
}
void Point::display() {
	cout << "�޸ĺ������Ϊ��" << '(' << x << ',' << y << ')' << endl;
}
int main() {
	Point a;
	a.setPoint();
	a.display();
}