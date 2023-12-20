#include<iostream>
using namespace std;
class Student {
private:double Mark;
	   double m;
	   int No;
public:
	Student(int, double);
	friend void maxm(Student* );
};
Student::Student(int no, double mark) {
	No = no;
	Mark = mark;
}
void maxm(Student* score) {
	double temp=0;
	for (int i = 0; i < 5-1;i++) {
		for (int j = 0; j < 5 - 1 - i;j++) {
			if (score[j].Mark>temp) {
				temp = score[j].Mark;
			}
		}
	}for (int n = 0; n < 5;n++) {
		if(temp==score[n].Mark)
		cout << "分数最高的学生学号为：" << score[n].No << endl;
	}
}
int main() {
	Student* cp;
	Student score[5] = { Student(001,90),Student(002,79),Student(003,98),Student(004,86) ,Student(005,88) };
	maxm(score);
}