#include <iostream>
#include "Rect.h"
#include "Circle.h"
using namespace std;

int main()
{
	custom::Rect rect1(custom::Point2f(0, 0), 2, 2);
	custom::Rect rect2(custom::Point2f(1, 0), 2, 2);
	std::cout << (rect1 & rect2) << "\n";
	std::cout << (rect1 | rect2) << "\n";
	custom::Circle circle1(custom::Point2f(0, 0), 3);
	custom::Circle circle2(custom::Point2f(4, 0), 3);
	std::cout << (circle1 & circle2) << "\n";
	std::cout << (circle1 | circle2) << "\n";
	return 0;
}