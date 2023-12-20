/*#include<iostream>
using namespace std;
enum gender{man,female};
//定义结构类型
struct student {//struct 结构类型名{数据类型1 成员名1；}数据类型可以是构造数据类型
	long num, birthday;//此处num指代学号
	int age;
	float money;
	char name[22];  //声明了一个姓名数组
	gender sex;
};
//结构变量的初始化方法,顺序要相同,此处guoqing是我创建的一个结构变量
student guoqing = {1,1001,18,0,"郭庆",female};
//创建guoqing这个结构变量，相应的定义了多个成员变量，通过结构变量存取各个成员变量
student s002;
int main() {
	//s002.name = "";怎么给s002姓名呢？
	cout << guoqing.age << endl;;
	s002 = guoqing;//这是把guoqing这个结构变量的所有成员变量的值都赋值给了s002;
	cout << s002.num;
}*/
