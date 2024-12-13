#include<iostream>
using namespace std;
const int s = 10;

void bubbleSort(double list[10]) {
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <s-1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}

int main()
{
	double list[s];
	cout << "Please enter ten number : \n";
	for (int i = 0; i < s; i++)
		cin >> list[i];
	bubbleSort(list);

	for (int k = 0; k < s; k++)
		cout << list[k] << " ";
	cout << endl;

	return 0;
}