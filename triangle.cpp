#include "triangle.h"
#include <string>
#include <cmath>
using namespace std;
Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) : point1(p1), point2(p2), point3(p3) {}
Triangle::Triangle(const Triangle& triangle) : point1(triangle.point1), point2(triangle.point2), point3(triangle.point3) {}
bool Triangle::equals (const Triangle& other) const {
    return point1.equals(other.point1)&& point2.equals(other.point2) && point3.equals(other.point3);
}
void Triangle::flip() {
    point1.flip();
    point2.flip();
    point3.flip();
}
void Triangle::move(double dx, double dy) {
    point1.move(dx, dy);
    point2.move(dx, dy);        
    point3.move(dx, dy);
}
double Triangle::getSurface() const {
    double a =sqrt(pow(point2.getX()-point1.getX(),2)+pow(point2.getY()-point1.getY(),2));
    double b =sqrt(pow(point3.getX()-point2.getX(),2)+pow(point3.getY()-point2.getY(),2));
    double c =sqrt(pow(point1.getX()-point3.getX(),2)+pow(point1.getY()-point3.getY(),2));
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
string Triangle::toString() const {
    return "Triangle(" + point1.toString() + ", " + point2.toString() + ", " + point3.toString() + ")";
}