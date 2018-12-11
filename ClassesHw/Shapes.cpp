#include "Shapes.hpp"


Circle::Circle(Vector2D _center, double _radius){
    m_center = _center;
    m_radius = _radius;
}

ostream& Circle::display(ostream &os) {
    os << "Circle(" << m_center << ";" << m_radius << ")";
    return os;
}

void Circle::translate(Vector2D v) {
    m_center += v;
}


Triangle::Triangle(Vector2D v1, Vector2D v2, Vector2D v3) {
    m_points[0] = v1;
    m_points[1] = v2;
    m_points[2] = v3;
}


ostream& Triangle::display(ostream &os) {
    os << "Triangle(" << m_points[0] << ";" << m_points[1] << ";" << m_points[2] << ")";
    return os;
}

void Triangle::translate(Vector2D v) {
    for (int i = 0; i < 3; i++) {
        m_points[i] += v;
    }
}
