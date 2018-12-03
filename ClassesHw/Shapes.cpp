#include "Shapes.hpp"

ostream& Circle::display(ostream &os) {
    os << "Circle(" << m_center << ";" << m_radius << ")";
    return os;
}

void Circle::translate(Vector2D v) {
    m_center += v;
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
