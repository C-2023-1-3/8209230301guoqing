//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"             //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::set_value(int n,const char* na, char s) {
    num = n;
    memcpy(name, na,20);
    sex = s;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
