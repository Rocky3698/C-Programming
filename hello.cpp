#include <bits/stdc++.h>
using namespace std;

class a
{
public:
    static int num1;
    int num2 = 0;
    void display()
    {
        cout << num1++ << " " << num2++<< endl;
    }
};



int main()
{
    a b;

    b.display();
    b.display();
    a c;
    c.display();
    c.display();
}