#include <iostream>
#include <string>

using namespace std;

class  Person
{
protected:
    string name;

public:
     Person(string n) : name(n) {}

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Student
{
protected:
    int studentID;

public:
    Student(int id) : studentID(id) {}

    void display()
    {
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public  Person, public Student
{
private:
    string subject;

public:
    Teacher(string n, int id, string s) :  Person(n), Student(id), subject(s) {}

    void display()
    {
         Person::display();
        Student::display();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Teacher t("  Person", 1021, "OOP_C++");
    t.display();

    return 0;
}
