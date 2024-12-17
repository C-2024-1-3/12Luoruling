#include<iostream>
using namespace std;

class Time           
{
public:
	void settime();
	void showtime();
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}
void Time::settime()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}
void Time::showtime()
{
	cout <<"时间为"<< hour << ":" << minute << ":" << sec << endl;
}
