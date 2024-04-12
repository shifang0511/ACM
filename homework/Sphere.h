#ifndef SPHERE_H
#define SPHERE_H
#include"circle.h"
class sphere : public circle
{
public:
    sphere(double r) : circle(r) {}
    sphere() : circle() {}
    ~sphere() {}
    double area() const;
    double volume() const;
};

#endif