#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "Please enter three sides : " << endl;
	cin >> side1 >> side2 >> side3;
	if (is_vaild(side1, side2, side3))
		cout << "The area is " << double_area(side1, side2, side3) << endl;
	else
		cout << "The sides are illegal ." << endl;

	return 0;
}


