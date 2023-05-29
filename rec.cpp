#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    float height;
    int age;
    Person(string s,float h,int a) // constructor
    {
        name=s;
        height=h;
        age=a;
    }
};
int main()
{
    Person *Rocky=new Person("Rocky Chowdhury",5.6,21);
    Person *Shahin=new Person("Shahin Chowdhury",5.5,20);
    (Rocky->age>Shahin->age)?cout<<Rocky->name<<endl:cout<<Shahin->name<<endl;
    return 0;
}
