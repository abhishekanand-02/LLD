/*
Abstraction Practice Question

Create an abstract class Shape with an abstract method area().
Then, create two subclasses Circle and Rectangle that implement the area() method in their own way.

Finally, write a small program to:

1. Create objects of Circle and Rectangle.
2.Call their area() method to display the result.

*/

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual int area() = 0; 
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r) {
        radius = r;
    }
    int area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() override {
        return length * breadth;
    }
};

int main() {
    Shape* c1 = new Circle(5);
    Shape* r1 = new Rectangle(4, 6);

    cout << "Area of Circle: " << c1->area() << endl;
    cout << "Area of Rectangle: " << r1->area() << endl;

    delete c1;
    delete r1;
    return 0;
}

// Abstraction is the process of hiding implementation details and showing only the essential features of an object.
// In C++, abstraction is typically achieved using abstract classes and pure virtual functions, which define a blueprint (what to do) but leave the actual implementation (how to do it) to the derived classes.

// An abstract class is a class that cannot be instantiated (you can’t make objects of it directly).
// In C++, a class becomes abstract if it has at least one pure virtual function.
// A pure virtual function is a virtual function with = 0 at the end.