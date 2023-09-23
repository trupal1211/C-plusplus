#include <iostream>
using namespace std;

// operator fun. have no return type

class unary
{
    int x, y;

public:
    void getdata()
    {
        cout << "enter x and y";
        cin >> x >> y;
    }

    void putdata()
    {
        cout << "x=" << x << "   y=" << y << endl;
    }

    void operator-()
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    unary a;
    a.getdata();
    a.putdata();
    -a; // also a- doing same work
    a.putdata();

    return 0;
}

//----------------------------------------------------------------------------------//

// operator fun. have return type

class unary
{
    int x, y;

public:
    void getdata()
    {
        cout << "enter x and y";
        cin >> x >> y;
    }

    void putdata()
    {
        cout << "x=" << x << "   y=" << y << endl;
    }

    unary operator-()
    {
        unary t;
        t.x = -x;
        t.y = -y;
        return t;
    }
};

int main()
{
    unary a, b;
    a.getdata();
    a.putdata();
    b = -a;
    b.putdata();

    return 0;
}

//----------------------------------------------------------------------------------//

// operator function as non-member , must make friend fun.   and have one arg. for unary oo.

#include <iostream>
using namespace std;

class unary
{
    int a, b;

public:
    void read()
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
    }

    void display()
    {
        cout << "a= " << a << " b= " << b << endl;
    }

    friend void operator-(unary &x);
};

void operator-(unary &x) // must use refrence otherwise scope is out within this block
{

    x.a = -x.a;
    x.b = -x.b;
}

int main()
{
    unary u;
    u.read();
    u.display();
    -u;          // for this type of call use refrence variable
    u.display(); // other wise u=-u; - op.fun. having return type
    return 0;
}