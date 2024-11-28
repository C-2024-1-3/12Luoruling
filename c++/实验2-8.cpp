#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, x, y;
    cout << "输入一个数a：";
    cin >> a;

    x = a;
    y = 0.5 * (x + a / x);
    while (fabs(x - y) >= 0.00001) {
        x = y;
        y = 0.5 * (x + a / x);
    }
    cout << "a的平方根为" << y << endl;
    return (0);
}