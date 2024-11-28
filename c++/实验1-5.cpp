#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double hua,she;
	cout << "请输入华氏温度:";
	cin >> hua;
	she = (hua - 32) * 5 / 9;
	cout << "摄氏温度为:" << fixed<<setprecision(2)<<she << endl;
	return 0;
}

