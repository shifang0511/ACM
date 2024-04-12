#include"Sphere.h"
#include"Column.h"
#include<iostream>
using namespace std;
int main()
{
    circle* circles[2];
    circles[0] = new column(2,3);
    circles[1] = new sphere(2);

    for (int i = 0; i < 2; i++) {
        cout<<circles[i]->volume()<<endl;
        cout<<circles[i]->area()<<endl;
    }

    for (int i = 0; i < 2; i++) {
        delete circles[i];
    }
}