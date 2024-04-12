#include"column.h"

column::column(double r, double h) : circle(r), h(h) {}
column::column() : circle(), h(0) {}
column::~column() {}
void column::setH(double h)
{
    this->h = h;
}
double column::getH() const
{
    return h;
}
double column::area() const
{
    return 2 * PI * getRadius() * getH() + 2 * PI * getRadius() * getRadius();
}
double column::volume() const
{
    return PI * getRadius() * getRadius() * getH();
}