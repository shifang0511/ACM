#ifndef column_H
#define column_H
#include"circle.h"
class column : public circle
{
private:
    double h;
public:
    column(double r, double h);
    column();
    ~column();
    double area() const;
    double volume() const;
    void setH(double h);
    double getH() const;
};

#endif