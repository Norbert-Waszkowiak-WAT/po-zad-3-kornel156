#pragma once
#include <string>
using namespace std;

class Point {
public:
    Point(double x, double y);
    Point(const Point& p);

    double getX() const;
    double getY() const;

    bool equals(const Point& other) const;
    void flip();
    void move(double dx,double dy);
    string toString() const;

private:
    double x;
    double y;
};