#include<iostream>
#include<iomanip>
using namespace std;
//判断是否为素数
bool is_prime(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			return false;
		}
	}
	return true;
}
//按要求输出指定个数素数
void printPrimenumber(int numofprime)
{
	const int number_of_prime = 200;
	const int line = 10;
	int count = 0;
	int number = 2;
	while (count<numofprime)
	{
		if (is_prime(number))
		{
			count++;
			if (count % line == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}
int main()
{
	cout << "The frist 200 prime number are \n";
	printPrimenumber(200);

	return 0;
}