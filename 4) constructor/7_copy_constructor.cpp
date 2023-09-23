#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    void display()
    {
        cout << "the number for this object is" << a << endl;
    }

    number(number &obj) // referance of number object
    {
        cout << "copy constructor called..." << endl;
        a = obj.a;
    }
    // if we removed copy constuctor give no error.   why??
    // compiler allocate a default constuctor to all class.
    // when no copy constructor is found , compiler supplies its own copy constructor.
};

int main()
{
    number x, y, z(100);
    x.display();
    y.display();
    z.display();

    number z1(z); // copy constructor invoked      //z1 sgould exactly resemble z or xor y
    z1.display();

    number z2;
    z2.display();
   
    z2 = z1;      // copy constructor not invoked  , simple assign member by member
    z2.display(); // you chech with cout statement

    number z3 = z1; // copy constructorinvoked
    z3.display();
    return 0;
}