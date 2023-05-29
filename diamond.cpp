#include <iostream>
#include <string>
using namespace std;

class  Person
{
protected:
    string name;

public:
     Person(string n)
    {
        name = n;
    }

    virtual void print()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public  Person
{
public:
    Student(string n) :  Person(n) {}

    void print()
    {
        cout << "Student's name: " << name << endl;
    }
};

class Teacher : virtual public  Person
{
public:
    Teacher(string n) :  Person(n) {}

    void print()
    {
        cout << "Teacher's name: " << name << endl;
    }
};

class GradStudent : public Student, public Teacher
{
public:
    GradStudent(string n) :  Person(n), Student(n), Teacher(n) {}

    void print()
    {
        cout << "Grad Student's name: " << name << endl;
    }
};

int main()
{
    GradStudent gs("John Doe");
    gs.print();
    
    return 0;
}