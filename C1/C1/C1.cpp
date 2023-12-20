
#include<iostream>
using namespace std;
class Student {
private:
	int No;
	int num;
	double Mark;
	double m;
public:
	Student(int, double);
	void maxm(Student*);
	void shuchu();
};
Student::Student(int no, double mark) {
	No = no;
	Mark = mark;
}
void Student::maxm(Student* score) {
    m = (score[1].Mark > score[2].Mark ? score[1].Mark : score[2].Mark) > score[3].Mark ? (score[1].Mark > score[2].Mark ? score[1].Mark : score[2].Mark) : score[3].Mark;
	for (int i = 0; i < 5; i++) {
		if (score[i].Mark) { num = score[i].No; }
	}
}
void Student::shuchu() {
	cout << "分数最高的学生学号为：" << num;
}
int main() {
	Student* cp;
	Student score[5] = { Student(001,90),Student(002,79),Student(003,96),Student(004,86) ,Student(005,88) };
	score[5].shuchu();
}/*#include<iostream>
using namespace std;
class Team {};
class Grade {
	Team a;
	Grade* p;
	Grade& r;
};
class human {
public:
	human(int age_t,int money_t) {
		int age = age_t;
		int money = money_t;
		//learn();
	}
	human(human&) {};
	int* frd = new int();
private:
	;
protected:
	;
public:
	int learn() {
		cout << "learn函数调用" << endl;
		return 0;
		//cout << money;
	};
	~human() {//析构函数
		if (frd != NULL)
			delete frd;
		    frd = NULL;
	}
};
class Clock {
private:
	int H, M, S;
public:
	Clock(int h = 0, int m = 0, int s = 0) {
		H = h, M = m, S = s;
		cout << "constructor" << H << ":" << M << ":" << S << endl;
	}
	~Clock() {
		cout << "destructor" << H << ":" << M << ":" << S << endl;
	}
	Clock(Clock&p) {//拷贝构造函数,这个p应该不是被拷贝的对象吧
		cout << H << ":" << M << ":" << S << endl;
		H = p.H;
		M = p.M;
		S = p.S;
	}
	void ShowTime() {
		cout<< H << ":" << M << ":" << S << endl;
	}
	void SetTime(int h, int m, int s) {
		H = h, M = m, S = s;
		this->H = h;//this可写可不写
		(*this).H = h;
	}
};

Clock fun(Clock C) {
	return (7,7,7);//???
}
Clock C1(8, 0, 0);
Clock C2(9, 0, 0);
class String {
public:
	void showstr(){}
	String(){}
	String(String&r){

	}
};
class Student {
private:
	static int counts;
public:
	static int getcounts() {
		return counts;
	};
};
int main(void) {
	human lisi(99,123);
	Clock C3(10, 0, 0);
	Clock C4(11, 0, 0);
    lisi.learn();
	fun(C2);
	return 0;
	Student::getcounts;
}*/