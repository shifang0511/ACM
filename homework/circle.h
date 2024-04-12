#ifndef CIRCLE_H
#define CIRCLE_H
#include<string>
#include<iostream>
const double PI = 3.14159;

class circle
{
private:
    double radius;
public:
    circle(double r);
    circle();
    ~circle();
    virtual double area() const = 0;
    virtual double volume() const = 0;
    void setRadius(double r);
    double getRadius() const ;
};;

#endif