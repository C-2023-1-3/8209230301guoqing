#include<iostream>
using namespace std;
class Point {
private:int x, y;
public:
	void setPoint(int, int);
	void display();
};
void Point::setPoint(int i, int j) {
	x= 60 + i;
	y= 80 + j;
}
void Point::display() {
	cout << '(' << x << ',' << y << ')' << endl;
}
int main() {
	Point a;
	a.setPoint(60,80);
	a.display();
}