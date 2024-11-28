#include<iostream>
using namespace std;
int main() {
	int j = 0;
	float sum = 0;
	for (int i = 2; i <= 100; i *= 2) {
		sum = sum + i * 0.8;
		j++;
	}
	float average = sum / j;
	cout << "the average money is:" << average << endl;
}