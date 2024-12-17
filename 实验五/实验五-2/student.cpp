#include <iostream>
#include<iomanip>
using namespace std;
#include "student.h"             

void Student::display()                 
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}

void Student::set_value()
{
    cout << "Enter Student Num: ";
    cin >> num;
    cout << "Enter Student Name: ";
    cin >> name; 
    cout << "Enter Student Gender(M or F): ";
    cin >> sex;
    while (sex!='M' && sex!='F') {
        cout << "Gender Error! Retry!\nEnter Student Gender(M or F): ";
        cin >> sex;
    }
    cout << endl;
}
