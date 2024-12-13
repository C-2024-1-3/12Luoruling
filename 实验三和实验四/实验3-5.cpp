#include<iostream>
using namespace std;
int main()
{
	int m = 1;
	for (int i = 1; i < 10; i++)
		m = (m + 1) * 2;
	cout << "on the first day the monkey picked " << m << " peaches" << endl;
	return 0;
}
