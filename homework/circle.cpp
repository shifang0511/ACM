#include"circle.h"

circle::circle(double r) : radius(r) {}
circle::circle() : radius(0) {}
circle::~circle() {}
void circle::setRadius(double r)
{
    radius = r;
}
double circle::getRadius() const
{
    return radius;
}