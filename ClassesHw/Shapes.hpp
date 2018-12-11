#ifndef SHAPES_H
#define SHAPES_H

#include "Vector2D.hpp"
#include <ostream>



using namespace std;

/*
 * Interface for a polymorphic shape.
 *
 * Should not be possible to instatiate, copy, or move.
 * IShape must be a C++ interface-style class (no member variables; member functions have no implementations).
 *
 * Given IShape * o, Vector2D v, std::ostream os, the following should be defined:
 */
class IShape {
public:
    
    IShape() = default;
    
    //TODO
    //Do I need to do this in each implementation?
    IShape(const IShape&) = delete;
    void operator=(const IShape&) = delete;
    IShape(IShape&&) = delete;
    IShape& operator=(IShape&&) = delete;

    // o->display(os): streams shape description (not followed by a newline) to given stream and returns stream
    virtual ostream& display(ostream &os) = 0;
    
    // o->translate(v): translates shape by v
    virtual void translate(Vector2D v) = 0;
    
    virtual ~IShape() {}

private:
};





/*
 * Circle shape class; subclass of IShape.
 *
 * Should not be possible to copy or assign.
 *
 * Circle display format "Circle(cx cy; radius)"
 */
class Circle: public IShape {
public:
    
    Circle(Vector2D _center, double _radius);
    
    virtual void translate(Vector2D v);
    virtual ostream& display(ostream &os);
    
private:
  Vector2D m_center; // center point of circle
  double m_radius; // radius of circle
};





/*
 * Triangle shape class; subclass of IShape.
 *
 * Stores the points in a dynamically allocated array.
 *
 * Should not be possible to copy or move.
 *
 * Triangle display format: "Triangle(ax ay; bx by; cx cy)"
 */
class Triangle : public IShape {
public:
    
    Triangle(Vector2D v1, Vector2D v2, Vector2D v3);
    
    virtual void translate(Vector2D v);
    virtual ostream& display(ostream &os);

private:
  Vector2D * m_points; // pointer to dynamic length-three array containing points
};

#endif
