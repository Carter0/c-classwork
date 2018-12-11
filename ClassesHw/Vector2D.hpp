#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;
/*
 * Class representing a 2D vector with elements x and y.
 *
 * Given Vector2D v, size_t i, double d, std::ostream os, the following should be defined:
 *
 *
 *
 *
 *
 *  v *= d, v * d, d * v, v /= d, v / d: element-wise multiplication or division; throws std::invalid_argument on division by 0
 */
class Vector2D {
public:
  // TODO
    //Vector2D(): initializes elements to 0
    Vector2D();
    //Vector2D(v): copy construction
    Vector2D(const Vector2D &v);
    //Vector2D(d1, d2): initializes x to d1 and y to d2
    Vector2D(double x, double y);
    //v.setX(d): set x to d
    void setX(const double x);
    //v.setY(d): set y to d
    void setY(const double y);
    //v.getX(): returns x
    double getX() const;
    //v.getY(): returns y
    double getY() const;
    //os << v1: streams x and y separated by a space
    friend ostream& operator<<(std::ostream& os, const Vector2D &v);
    //v1[i]: non-const and const element access; index 0 for x, index 1 for y; throws std::out_of_range on any other index
    double operator[] (int position) const;
    
    double& operator[] (int position);

    
    //v1 = v2: element-wise assignment
    Vector2D& operator=(const Vector2D& v);
    
    //v1 == v2; v1 != v2: element-wise (in)equality comparison
    
    bool operator==(Vector2D v);
    bool operator!=(Vector2D v);
    
    //*  -v: element-wise negation
    Vector2D& operator-();
    
    //Doing scalar multiplication
    friend Vector2D operator* (Vector2D v1, const double d);
    friend Vector2D operator* (const double d, Vector2D v1);
    
    Vector2D& operator*= (const double d);
    Vector2D& operator/= (const double d);
    
    Vector2D operator/ (const double d);

    
    //v1 += v2, v1 + v2, v1 -= v2, v1 - v2: element-wise addition or subtraction
    Vector2D& operator+= (const Vector2D& v);
    Vector2D& operator-= (const Vector2D& v);
    Vector2D operator- (const Vector2D& v) const;
    Vector2D  operator+ (const Vector2D& v) const;
    
    //v *= d, v * d, d * v, v /= d, v / d: element-wise multiplication or division; throws std::invalid_argument on division by 0
    Vector2D& operator/= (const Vector2D& v);
    Vector2D& operator*= (const Vector2D& v);
    Vector2D operator/ (const Vector2D& v) const;
    Vector2D operator* (const Vector2D& v) const;
    
    

    
    
    
    
    
    

private:
  double m_x;
  double m_y;
};

#endif
