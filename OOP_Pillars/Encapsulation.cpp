/*
Encapsulation Practice Question

Create a class Student that has:
- Private data members: name, age, marks.
- Public methods:
    setName(string n), setAge(int a), setMarks(int m) → to set values.
    getName(), getAge(), getMarks() → to access values.

In main():
- Create an object of Student.
- Set the values using setters.

Print the values using getters.
*/

#include<iostream>
using namespace std;

class Students{
    private:
        string name;
        int age;
        int marks;
        
    public:
        void setName(string name){
            this->name = name;
            
        }
        void setAge(int age){
            this->age=age;
            
        }
        void setMarks(int marks){
            this->marks= marks;
            
        }
        string getName(){
            return name;
            
        }
        int getAge(){
            return age;
        }
        int getMarks(){
            return marks;
        }
        
};
int main(){
    Students * new_student= new Students();
    new_student->setName("Abhishek");
    new_student->setAge(24);
    new_student->setMarks(100);

    
    cout << "Name: " << new_student->getName() << endl;
    cout << "Age: " << new_student->getAge() << endl;
    cout << "Marks: " << new_student->getMarks() << endl;
    
    delete new_student;

    
}
//Encapsulation: Hides internal data and provides controlled access through getters and setters.