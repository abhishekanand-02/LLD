#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;

    virtual void display() {  // virtual function
        cout << "Employee: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void display() override {  // overrides base class function
        cout << "Manager: " << name << ", ID: " << id << ", Department: " << department << endl;
    }
};

class Engineer : public Employee {
public:
    string specialization;

    void display() override {  // overrides base class function
        cout << "Engineer: " << name << ", ID: " << id << ", Specialization: " << specialization << endl;
    }
};

int main() {
    // Base class pointers pointing to derived class objects
    Manager m;
    m.name = "Alice";
    m.id = 101;
    m.department = "HR";

    Engineer e;
    e.name = "Bob";
    e.id = 102;
    e.specialization = "Software";

    Employee* emp1 = &m;  // pointer to Manager
    Employee* emp2 = &e;  // pointer to Engineer

    // Polymorphism in action
    emp1->display();  // calls Manager's display
    emp2->display();  // calls Engineer's display

    return 0;
}
/*
1. Abstraction = “I know I need an engine, but I don’t care how it works.”
2. Inheritance = “I’m building a Car that uses Engine’s features.”
3. Polymorphism = “I can have a Car pointer that points to ElectricCar or PetrolCar, and the engine starts correctly depending on the type.
*/