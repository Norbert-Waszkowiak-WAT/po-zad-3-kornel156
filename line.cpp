#include "line.h"
#include <string>
using namespace std;

Line::Line(const Point& p1, const Point& p2) : point1(p1), point2(p2) {}
Line::Line(const Line& line) : point1(line.point1), point2(line.point2) {}
bool Line::equals (const Line& other) const {
    return point1.equals(other.point1) && point2.equals(other.point2);
}
void Line::flip() {
    point1.flip();
    point2.flip();
}
void Line::move(double dx, double dy) {
    point1.move(dx, dy);
    point2.move(dx, dy);
}
string Line::toString() const {
    return "Line(" + point1.toString() + ", " + point2.toString() + ")";
}