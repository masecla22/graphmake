#include <iostream>
#include <cmath>
#include <windows.h>
#include <graphics.h>
#pragma once

class point {
public:
    double x,y;
    double relToX,relToY;
    point(double x1,double y1)
    {
        x=x1;
        y=y1;
    }
    void setRelative(point what){
        relToX = what.x;
        relToY = what.y;
    }
    point getActualPosition(){
        return point(relToX+x,relToY-y);
    }
};

double getDistance(point a,point b){
    double distance = sqrt(pow(a.x+b.x,2)-pow(a.y+b.y,2));
    return distance;
}
void createWindow(){
    initwindow(900,600,"Graph creator",100,100);
}

void line(point a,point b){
    line(a.x,a.y,b.x,b.y);
}
