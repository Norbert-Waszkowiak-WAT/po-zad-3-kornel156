#include "quadrilateral.h"
#include <string>
using namespace std;
Quadrilateral::Quadrilateral(const Point& p1, const Point& p2, const Point& p3, const Point& p4) 
    : point1(p1), point2(p2), point3(p3), point4(p4) {}
Quadrilateral::Quadrilateral(const Quadrilateral& quad) 
    : point1(quad.point1), point2(quad.point2), point3(quad.point3), point4(quad.point4) {}
bool Quadrilateral::equals (const Quadrilateral& other) const {
    return point1.equals(other.point1) && point2.equals(other.point2) && point3.equals(other.point3) && point4.equals(other.point4);
}
void Quadrilateral::flip() {
    point1.flip();
    point2.flip();      
    point3.flip();
    point4.flip();
}
void Quadrilateral::move(double dx, double dy) {
    point1.move(dx, dy);
    point2.move(dx, dy);        
    point3.move(dx, dy);    
    point4.move(dx, dy);
}
double Quadrilateral::getSurface() const {
    double a = point2.getX()*(point3.getY()-point1.getY());
    double b = point3.getX()*(point4.getY()-point2.getY());
    double c = point4.getX()*(point1.getY()-point3.getY());
    double d = point1.getX()*(point2.getY()-point4.getY());
    return 0.5*abs(a+b+c+d);
}
string Quadrilateral::toString() const {
    return "Quadrilateral(" + point1.toString() + ", " + point2.toString() + ", " + point3.toString() + ", " + point4.toString() + ")";
}