#include <iostream>
using namespace std;
int main()
{
	char a[20];
	int i = 0;
	cout << "please input a character:\n";
	cin >> a;
	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] -= 32;
		cout << a[i] << endl;
	}
	else if (a[i] >= 'A' && a[i] <= 'Z')
	{
		a[i] += 1;
		cout << static_cast<int>(a[i]) << endl;
	}

	return 0;
}