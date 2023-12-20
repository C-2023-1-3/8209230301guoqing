//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud(007, "tcg", 'm');
	stud.set_value(001, "abc", 'n');
	stud.display();              //执行stud对象的display函数
	return 0;
}