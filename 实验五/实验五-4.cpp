#include<iostream>
using namespace std;
class Student
{
public:
	Student() {}
	Student(string i, double s) :id(i), score(s) {}
	string id;
	double score;
};
void max(Student* p)
{
	Student* t, * s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}

	cout << "成绩最高者学号为:" << s->id << " 成绩为：" << max << "分" << endl;
}
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入学生的学号和成绩：";
		cin >> s[i].id >> s[i].score;
	}
	max(s);
	return 0;
}