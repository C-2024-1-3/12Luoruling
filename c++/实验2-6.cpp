//从键盘上输入两个正整数，求 a 和 b 的最大公约数与最小公倍数
#include<iostream>
using namespace std;
int main()
{
	int a, b, t, r;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	if (a < b)
	{
		t = b; b = a; a = t;
	}
	r = a % b;
	int n = a * b;
	while (r != 0)
	{
		a = b; b = r; r = a % b;
	}
	cout << "最大公约数为：" << b << endl;
	cout << "最小公倍数为：" << n / b << endl;
	return 0;
}
