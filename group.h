#pragma once
#include "quadrilateral.h"
#include "line.h"
#include "triangle.h"
#include "point.h"
#include <string>
#include <cmath>
#include <vector>
using namespace std;
class Group {
public:
    Group();
    Group(const Group& group);
    bool equals(const Group& other) const;
    void remove(Line l);
    void remove(Triangle t);
    void remove(Quadrilateral q);
    void add(Line l);
    void add(Triangle t);
    void add(Quadrilateral q);
    double getSurface() const;
    void flip();
    void move(double dx, double dy);
    string toString() const;
private:
    vector<Line> lines;
    vector<Triangle> triangles;
    vector<Quadrilateral> quadrilaterals;
};