#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

/*
 * Class representing a 2D vector with elements x and y.
 *
 * Given Vector2D v, size_t i, double d, std::ostream os, the following should be defined:
 *  Vector2D(): initializes elements to 0
 *  Vector2D(v): copy construction
 *  Vector2D(d1, d2): initializes x to d1 and y to d2
 *  v.setX(d): set x to d
 *  v.setY(d): set y to d
 *  v.getX(): returns x
 *  v.getY(): returns y
 *  os << v1: streams x and y separated by a space
 *  v1[i]: non-const and const element access; index 0 for x, index 1 for y; throws std::out_of_range on any other index
 *  v1 = v2: element-wise assignment
 *  v1 == v2; v1 != v2: element-wise (in)equality comparison
 *  -v: element-wise negation
 *  v1 += v2, v1 + v2, v1 -= v2, v1 - v2: element-wise addition or subtraction
 *  v *= d, v * d, d * v, v /= d, v / d: element-wise multiplication or division; throws std::invalid_argument on division by 0
 */
class Vector2D {
public:
  // TODO

private:
  double m_x;
  double m_y;
};

#endif
