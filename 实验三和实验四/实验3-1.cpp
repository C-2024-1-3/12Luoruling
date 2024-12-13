#include<iostream>
using namespace std;
//求最大公约数
int gcd(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <= n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
//求最小公倍数
int icm(int m, int n)
{
	int k = 1;
	for (int i = 2; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
	}
	int h;
	h = m * n / k;
	return h;
}int main()
{
	cout << "Please enter two nums:" << endl;
	int m, n;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	cout << m << "和" << n << "最大公约数为" << gcd(m, n) << endl;
	cout << m << "和" << n << "最小公倍数为" << icm(m, n) << endl;
	return 0;

}