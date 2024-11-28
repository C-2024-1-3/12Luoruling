#pragma once
#include <iostream>
namespace custom
{
	class Point2f
	{
	public:
		Point2f(float x=0, float y=0):_x(x),_y(y){}
		float x()const { return _x; }
		float y()const { return _y; }
	protected:
		float _x;
		float _y;
	};
	class Shape
	{
	public:
		Shape() {};
		Shape(Point2f center,float perimeter,float area):center_(center),perimeter_(perimeter),area_(area){}
	public:
		virtual float solvePerimeter() = 0;
		virtual float solveArea() = 0;
	protected:
		Point2f center_;
		float perimeter_;
		float area_;
	};
}