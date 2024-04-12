#include"Sphere.h"
double sphere::area() const
{
    return 4 * PI * getRadius() * getRadius();
}
double sphere::volume() const
{
    return 4.0 / 3.0 * PI * getRadius() * getRadius() * getRadius();
}