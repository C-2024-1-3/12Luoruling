#include "Rect.h"

float custom::Rect::solvePerimeter()
{
    return (_w+_h)*2;
}

float custom::Rect::solveArea()
{
    return _w*_h;
}

float custom::operator&(const Rect& rect1, const Rect& rect2)
{
    float intersectionWidth = std::max(0.0f, std::min(rect1._center.x() + rect1._w / 2, rect2._center.x() + rect2._w / 2) -
        std::max(rect1._center.x() - rect1._w / 2, rect2._center.x() - rect2._w / 2));
    float intersectionHeight = std::max(0.0f, std::min(rect1._center.y() + rect1._h / 2, rect2._center.y() + rect2._h / 2) -
        std::max(rect1._center.y() - rect1._h / 2, rect2._center.y() - rect2._h / 2));

    return intersectionWidth * intersectionHeight; 
   
}

float custom::operator|(const Rect& rect1, const Rect& rect2)
{
    float area1 = rect1.w() * rect1.h();
    float area2 = rect2.w() * rect2.h();
   
    float intersectionWidth = std::max(0.0f, std::min(rect1._center.x() + rect1._w / 2, rect2._center.x() + rect2._w / 2) -
        std::max(rect1._center.x() - rect1._w / 2, rect2._center.x() - rect2._w / 2));
    float intersectionHeight = std::max(0.0f, std::min(rect1._center.y() + rect1._h / 2, rect2._center.y() + rect2._h / 2) -
        std::max(rect1._center.y() - rect1._h / 2, rect2._center.y() - rect2._h / 2));

    return area1+area2-intersectionWidth * intersectionHeight;
}
