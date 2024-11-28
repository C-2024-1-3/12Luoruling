#include "Circle.h"

float custom::Circle::solvePerimeter()
{
    return 4*PI*_r;
}

float custom::Circle::solveArea()
{
    return PI*_r*_r;
}

float custom::operator&(const Circle& circle1, const Circle& circle2)
{
    float d = std::sqrt(std::pow(circle2._center.x() - circle1._center.x(), 2) +
        std::pow(circle2._center.y() - circle1._center.y(), 2));
    if (d >= circle1._r + circle2._r)
    {
        return 0.0f;
    }
    else if (d <= std::abs(circle1._r - circle2._r)) 
    {
        return PI * std::pow(std::min(circle1._r, circle2._r), 2);
    }
    else 
    {
        float r1_sq = circle1._r * circle1._r;
        float r2_sq = circle2._r * circle2._r;
        float part1 = r1_sq * std::acos((d * d + r1_sq - r2_sq) / (2 * d * circle1._r));
        float part2 = r2_sq * std::acos((d * d + r2_sq - r1_sq) / (2 * d * circle2._r));
        float part3 = 0.5f * std::sqrt((-d + circle1._r + circle2._r) *
            (d + circle1._r - circle2._r) *
            (d - circle1._r + circle2._r) *
            (d + circle1._r + circle2._r));

        return part1 + part2 - part3;
    }
}

float custom::operator|(const Circle& circle1, const Circle& circle2)
{
    float intersection_area = circle1 & circle2; 
    float union_area = PI * (std::pow(circle1._r, 2) + std::pow(circle2._r, 2)) - intersection_area;
    return union_area;
}
