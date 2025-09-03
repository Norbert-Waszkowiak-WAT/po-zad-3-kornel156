#pragma once
#include "point.h"
#include <string>
using namespace std;
class Quadrilateral {
public:
    Quadrilateral(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
    Quadrilateral(const Quadrilateral& quad); 
    bool equals(const Quadrilateral& other) const;
    void flip();
    void move(double dx, double dy);
    double getSurface() const;
    string toString() const;
private:
    Point point1;  
    Point point2;       
    Point point3;  
    Point point4;  
};