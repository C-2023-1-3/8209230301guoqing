//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud(007, "tcg", 'm');
	stud.set_value(001, "abc", 'n');
	stud.display();              //ִ��stud�����display����
	return 0;
}