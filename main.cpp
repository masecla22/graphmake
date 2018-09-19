#include <iostream>
#include <graphics.h>
#include <conio.h>
#include "drawings.h"

using namespace std;
point origin(450,300);
point yfunction(float x){
    point f = point(x,x*x);
    f.setRelative(origin);
    return f;
}
int main()
{
    createWindow();
    line(origin, point(0,300));
    line(origin, point(900,300));
    line(origin, point(450,0));
    line(origin, point(450,900));

    double x=-450;
    while(x<450){
        point a1 = yfunction(x);
        point a2 = yfunction(x+1);
        line(a1.getActualPosition(),a2.getActualPosition());
        x+=0.1;
    }

    _getch();

    return 0;
}
