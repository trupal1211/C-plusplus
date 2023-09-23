#include <iostream>
using namespace std;

// using temp object and return type in operator fun.

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "enter real and img part";
        cin >> real >> img;
    }

    void putdata()
    {
        cout << real << " + " << img << "i";
    }

    complex operator+(complex a)
    {
        complex t;
        t.real = real + a.real;
        t.img = img + a.img;
        return t;
    }
};

int main()
{

    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.putdata();

    return 0;
}

// without temp object and no return type in operator fun.

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "enter real and img part";
        cin >> real >> img;
    }

    void putdata()
    {
        cout << real << " + " << img << "i";
    }

    void operator+(complex a)
    {
        real = real + a.real;
        img = img + a.img;
        // cout<<real<<" + "<<img<<"i";
    }
};

int main()
{

    complex c1, c2;
    c1.getdata();
    c2.getdata();
    c1 + c2;
    c1.putdata();
    return 0;
}