#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "Enter a x = ";
	cin >> x;
	if (x < 1 && x>0)
	{
		y = 3 - 2 * x;
		cout << "y = " << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "y = " << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y = " << y << endl;
	}
	else if (x <= 0 || x >= 10)
		cout << "x isn't in the area ." << endl;

	return 0;
}
