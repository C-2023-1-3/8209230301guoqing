//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public: 
	Student(int num, const char* name, char sex){}
	void display();
	void set_value(int num, const char* name, char sex);//���ó�Ա����ԭ������
private:
    int num;
	char name[20];
	char sex;
}; 
