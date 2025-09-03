#pragma once
#include "point.h"
#include <string>
using namespace std;
class Triangle {
public: 
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    Triangle(const Triangle& triangle); 
    bool equals(const Triangle& other) const;
    void flip();
    void move(double dx, double dy);
    double getSurface() const;
    string toString() const;
private:
    Point point1;  
    Point point2;  
    Point point3;  
};