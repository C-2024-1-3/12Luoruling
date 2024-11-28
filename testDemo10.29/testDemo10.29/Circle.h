#pragma once
#include "Shape.h"
#define PI 3.141592
namespace custom
{
	class Circle :public Shape
	{
	public:
		Circle(Point2f center, float r) :_center(center), _r(r){}
	public:
		float solvePerimeter();
		float solveArea();
		friend float operator&(const Circle& circle1, const Circle& circle2);
		friend float operator|(const Circle& circle1, const Circle& circle2);
	public:
		float r()const { return _r; }
	protected:
		float _r;
		Point2f _center;
	};
}