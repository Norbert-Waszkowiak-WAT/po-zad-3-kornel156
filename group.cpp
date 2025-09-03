#include "group.h"
#include <string>
using namespace std;
Group::Group() {}
Group::Group(const Group& group) 
    : lines(group.lines), triangles(group.triangles), quadrilaterals(group.quadrilaterals) {}
bool Group::equals (const Group& other) const {
    if(lines.size()!=other.lines.size() || triangles.size()!=other.triangles.size() || quadrilaterals.size()!=other.quadrilaterals.size())
        return false;
    for(size_t i=0;i<lines.size();i++){
        if(!lines[i].equals(other.lines[i]))
            return false;  
    }
    for(size_t i=0;i<triangles.size();i++){
        if(!triangles[i].equals(other.triangles[i]))
            return false;  
    }
    for(size_t i=0;i<quadrilaterals.size();i++){
        if(!quadrilaterals[i].equals(other.quadrilaterals[i]))
            return false;  
    }
    return true;
}
void Group::remove(Line l) {
    for(auto it = lines.begin(); it != lines.end(); ++it) {
        if(it->equals(l)) {
            lines.erase(it);
            return;
        }
    }       
}
void Group::remove(Triangle t) {
    for(auto it = triangles.begin(); it != triangles.end(); ++it) {
        if(it->equals(t)) {
            triangles.erase(it);
            return;
        }
    }       
}
void Group::remove(Quadrilateral q) {
    for(auto it = quadrilaterals.begin(); it != quadrilaterals.end(); ++it) {
        if(it->equals(q)) {
            quadrilaterals.erase(it);
            return;
        }
    }       
}
void Group::add(Line l) {
    lines.push_back(l);
}
void Group::add(Triangle t) {
    triangles.push_back(t);
}
void Group::add(Quadrilateral q) {
    quadrilaterals.push_back(q);
}
double Group::getSurface() const {
    double totalSurface = 0.0;
    for (const auto& triangle : triangles) {
        totalSurface += triangle.getSurface();
    }
    for (const auto& quadrilateral : quadrilaterals) {
        totalSurface += quadrilateral.getSurface();
    }
    return totalSurface;
}
void Group::flip() {
    for(auto& line : lines) {
        line.flip();
    }
    for(auto& triangle : triangles) {
        triangle.flip();
    }
    for(auto& quadrilateral : quadrilaterals) { 
        quadrilateral.flip();
    }
}
void Group::move(double dx, double dy) {
    for(auto& line : lines) {
        line.move(dx, dy);
    }

    for(auto& triangle : triangles) {
        triangle.move(dx, dy);
    }
    for(auto& quadrilateral : quadrilaterals) {
        quadrilateral.move(dx, dy);
    }
}
string Group::toString() const {
    string result = "Group(";
    for(const auto& line : lines) {
        result += line.toString()+ ", ";
    }
    //if(lines.size() >0) result +=", ";
    for(const auto& triangle : triangles) {
        result += triangle.toString() +", ";
    }
    //if(triangles.size() >0) result +=", ";
    for(const auto& quadrilateral : quadrilaterals) {
        result += quadrilateral.toString()+ ", ";
    }
    result += ")";
    return result;
}