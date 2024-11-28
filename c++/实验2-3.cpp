#include <iostream>
using namespace std;
int main()
{
	double a, b, c, L;
	cout << "Please enter the three sides a , b , c : " << endl;
	cin >> a >> b >> c;
	L = a + b + c;
	if ((a + c > b && a + b > c) && (b + c > a && b + a > c) && (c + a > b && c + b > a)) {
		cout << "The perimeter of the triangle is : " << L << endl;
		if (a != b && a != c && b != c)
			cout << "This is not an isosceles triangle" << endl;
		else
			cout << "This is an isosceles triangle" << endl;
	}
	else
		cout << "Three sides do not meet the definition of triangle. Please enter the three sides again" << endl;

	return 0;
}