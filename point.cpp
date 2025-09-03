#include "point.h"
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point& p) : x(p.x), y(p.y) {}

double Point::getX() const { return x; }

double Point::getY() const { return y; }

bool Point::equals(const Point& other) const {
    return (x - other.x) == 0 && (y - other.y) == 0;
}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(double dx, double dy) {
    x += dx;
    y += dy;
}

string Point::toString() const {
    std::ostringstream oss;
    oss << "Point(" << std::fixed << std::setprecision(1) << x << ", " << y << ")";
    return oss.str();
}