#include<iostream>
using namespace std;
class volumn {
private:
	 double length, width, height;
public:
	void shuru() {
		cout << "请输入长方柱的长，宽，高：";
		cin >> length >> width >> height;
	}
	double math() {
		cout << "长方柱的体积为：" << length * width * height<<endl;
		return  length * width * height;
	}
};
int main() {
	volumn v1;
	v1.shuru();
	v1.math();
	volumn v2;
	v2.shuru();
	v2.math();
	volumn v3;
	v3.shuru();
	v3.math();
}