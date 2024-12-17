#include<iostream>
#include<cmath>
using namespace std;
class Cpoint
{
private:
    double x;
    double y;
public:
    Cpoint()
    {
        double x = 60;
        double y = 80;
    }
    void display()
    {
        cout << "坐标为：（" << x << "," << y << ")" << endl;
    }
    void setpoint(int i, int j)
    {
        x =60 + i;
        y =80+ j;
    }
};
int main()
{
        Cpoint p1;
        p1.setpoint(80, 150);
        p1.display();
        return 0;
}