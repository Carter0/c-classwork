 #include "Vector2D.hpp"
#include <stdexcept>

// TODO

Vector2D::Vector2D() {
    m_x = 0;
    m_y = 0;
}

Vector2D::Vector2D(Vector2D &v) {
    m_x = v.m_x;
    m_y = v.m_y;
}

Vector2D::Vector2D(double x, double y){
    m_x = x;
    m_y = y;
}

void Vector2D::setX(double x){
    m_x = x;
}

void Vector2D::setY(double y) {
    m_y = y;
}

double Vector2D::getX() const {
    return m_x;
}

double Vector2D::getY() const{
    return m_y;
}

ostream& operator << (ostream& os, const Vector2D &v) {
    os << v.m_x << " " << v.m_y;
    return os;
}

int Vector2D:: operator[] (int position) const{
    if(position == 0) {
        return m_x;
    } else if (position == 1) {
        return m_y;
    } else {
        throw out_of_range("Position can only be 1 or 0");
    }
}

bool Vector2D::operator==(Vector2D v) {
    return ((m_x == v.getX()) && (m_y == v.getY()));
}

bool Vector2D::operator!=(Vector2D v) {
    return ((m_x != v.getX()) || (m_y != v.getY()));
}

Vector2D& Vector2D::operator=(const Vector2D& v){
    if(this != &v) {
        m_x = v.getX();
        m_y = v.getY();
    }
    
    return *this;
}

Vector2D& Vector2D:: operator+= (Vector2D& v) {
    m_x = m_x + v.getX();
    m_y = m_y + v.getY();
    return *this;
}

Vector2D& Vector2D:: operator-= (Vector2D& v) {
    m_x = m_x - v.getX();
    m_y = m_y - v.getY();
    return *this;
}

Vector2D Vector2D:: operator+ (const Vector2D v) {
    double temp1 = m_x + v.getX();
    double temp2 =  m_y + v.getY();
    return Vector2D(temp1, temp2);
}

Vector2D& Vector2D:: operator- (Vector2D& v) {
    double temp1 = m_x - v.getX();
    double temp2 = m_y - v.getY();
    return Vector2D(temp1, temp2);
}

Vector2D& Vector2D:: operator/= (Vector2D& v) {
    if(v.getX() == 0 || v.getY() == 0) {
        throw invalid_argument("Cannot divide by 0");
    }
    m_x = m_x / v.getX();
    m_y = m_y / v.getY();
    return *this;
}

Vector2D& Vector2D:: operator*= (Vector2D& v) {
    m_x = m_x * v.getX();
    m_y = m_y * v.getY();
    return *this;
}

void Vector2D:: operator/ (Vector2D& v) {
    if(v.getX() == 0 || v.getY() == 0) {
        throw invalid_argument("Cannot divide by 0");
    }
    m_x = m_x / v.getX();
    m_y = m_y / v.getY();
}

void Vector2D:: operator* (Vector2D& v) {
    m_x = m_x * v.getX();
    m_y = m_y * v.getY();
}

Vector2D& Vector2D:: operator-() {
    m_x = -m_x;
    m_y = -m_y;
    return *this;
}

