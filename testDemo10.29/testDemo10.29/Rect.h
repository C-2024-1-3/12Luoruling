#pragma once
#include <iostream>
#include "Shape.h"
#include <algorithm>
namespace custom
{
	class Rect :public Shape
	{
	public:
		Rect(Point2f center,float w, float h):_center(center),_w(w),_h(h){}
	public:
		float solvePerimeter();
		float solveArea();
		friend float operator&(const Rect& rect1, const Rect& rect2);
		friend float operator|(const Rect& rect1, const Rect& rect2);
	public:
		float w()const { return _w; }
		float h()const { return _h; }
	protected:
		float _w;
		float _h;
		Point2f _center;
	};
}