#include <iostream>
#include <memory>
using namespace std;



//You are provided with a partial implementation of a class hierarchy.
//Entity is the base class and UpMover, DownMover, and Destroyer should inherit from it.
//Update the classes so that the derived classes can be constructed and used through base class pointers correctly.
//Do not add new member variables to any classes or new member functions to the derived classes.
//
//Entity holds the position as x, y coordinates.
//All objects are constructed with a starting position.
//The update method can change the position.


class Entity {
public:
    Entity(int x, int y): m_x(x), m_y(y) {}
    // TODO: implement other member functions as needed
    void moveBy(int dx, int dy) { m_x += dx; m_y += dy; }
    void print() { cout << m_x << "," << m_y << endl; }
    virtual void update();
private:
    Entity(const Entity & o) = delete;
    Entity & operator=(const Entity & o) = delete;
    int m_x, m_y;
};



class UpMover : public Entity {
public:
    UpMover(int x, int y) : Entity(x, y) {} // initialize position
    void update() { moveBy(0, 1); } // move up 1 in y
};

class DownMover : public Entity {
public:
    DownMover(int x, int y) : Entity(x, y) {} // initialize position
    void update() { moveBy(0, -1); } // move down 1 in y
};

class Destroyer : public Entity {
public:
    Destroyer(int x, int y) : Entity(x, y) {} // initialize position
    ~Destroyer() { cout << "Destroyed!" << endl; } // print a message when destructed
    void update() { } // do nothing
};





/* OUTPUT
1,2
3,4
5,6
5,7
7,8
7,7
9,9
9,9
Destroyed!
*/
int main() {
    {
        unique_ptr<Entity> p(new UpMover(1, 2));
        p->print();
    }
    {
        unique_ptr<Entity> p(new DownMover(3, 4));
        p->print();
    }
    {
        unique_ptr<Entity> p(new UpMover(5, 6));
        p->print();
        p->update();
        p->print();
    }
    {
        unique_ptr<Entity> p(new DownMover(7, 8));
        p->print();
        p->update();
        p->print();
    }
    {
        unique_ptr<Entity> p(new Destroyer(9, 9));
        p->print();
        p->update();
        p->print();
    }
}
