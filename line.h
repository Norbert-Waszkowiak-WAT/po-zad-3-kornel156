#pragma once
#include "point.h"
#include <string>
using namespace std;
class Line {
public:
    Line(const Point& p1, const Point& p2);
    Line(const Line& line); 
    bool equals(const Line& other) const;
    void flip();
    void move(double dx, double dy);
    string toString() const;
private:
    Point point1;
    Point point2;
};