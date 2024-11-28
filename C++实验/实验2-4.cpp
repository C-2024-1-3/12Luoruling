#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char p;
    cout << "输入一个数字：";
    cin >> num1;
    cout << "输入运算符：";
    cin >> p;
    cout << "输入另一个数字:";
    cin >> num2;

    switch (p) {
    case '+':cout << num1 + num2 << endl; break;
    case '-':cout << num1 - num2 << endl; break;
    case '*':cout << num1 * num2 << endl; break;
    case '/':
        if (num2 != 0) {
            cout << num1 / num2 << endl;
        }
        else {
            cout << "除数不可为0！" << endl;
        }
    case '%':
        if (num2 != 0) {
            cout << (int)num1 % (int)num2 << endl;
        }
        else {
            cout << "除数不可为0！" << endl;
        }
        break;
    default:cout << "运算符仅可为+、-、*、/、%" << endl;
    }
    return (0);
}