#include <iostream>
using namespace std;

class number
{
    int x, y;

public:
    number()
    {
        x = 0;
        y = 0;
    }
    number(int a)
    {
        x = a;
        y = 0;
    }
    number(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << "x=" << x << " , "
             << "y=" << y << endl;
    }
};

int main()
{
    number n1;
    number n2(4);
    number n3(4, 9);

    n1.print();
    n2.print();
    n3.print();

    return 0;
}


