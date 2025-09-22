/*
Inheritance Practice Problem

Create a class hierarchy for employees in a company:

- Base Class: Employee
- Data members: name (string), id (int)
- Method: displayEmployee() → prints name and id

Derived Class 1: Manager
- Additional data member: department (string)
- Method: displayManager() → prints name, id, and department

Derived Class 2: Engineer
- Additional data member: specialization (string)
- Method: displayEngineer() → prints name, id, and specialization

In main():
- Create one Manager and one Engineer object.

Set their data and display the information using their respective methods.
*/

#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;

    void displayEmployee() {
        cout << "Employee name is " << name << " and id is: " << id << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void displayManager() {
        // displayEmployee();
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};

class Engineer : public Employee {
public:
    string specialization;

    void displayEngineer() {
        // displayEmployee();
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    Manager* manager = new Manager();
    Engineer* engineer = new Engineer();

    manager->name = "Pratap";
    manager->id = 101;
    manager->department = "SWDG";

    engineer->name = "Abhishek";
    engineer->id = 102;
    engineer->specialization = "AI";

    manager->displayManager();
    engineer->displayEngineer();

    delete manager;
    delete engineer;

    return 0;
}
// Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (derived class or child class) to inherit properties and behaviors (data members and methods) from another class (base class or parent class).