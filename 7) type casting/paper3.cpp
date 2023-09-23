#include <iostream>
using namespace std;

class centimeter;

class meter
{
    int d_m;

public:
    void input()
    {
        cout << "enter d_m - distance in meter\n";
        cin >> d_m;
    }

    void output()
    {
        cout << "d_m = " << d_m << endl;
    }

    int getm()
    {
        return d_m * 100;
    }

    void operator=(centimeter ); // why here defination is not define
                                //  because in defination arg. have must name-with-type
                                // here suppose centimeter c1 in arg.
                                // compiler dont known that c1 have which type of data-member
};
 
class centimeter
{
    int d_cm;

public:
    void input()
    {
        cout << "enter d_cm - distance in centimeter\n";
        cin >> d_cm;
    }

    void output()
    {
        cout << "d_cm = " << d_cm << endl;
    }

    int getcm()
    {
        return d_cm / 100;
    }

    void operator=(meter m2) // here this posible
    {                        // because compiler known that m2 have d_m data-member
        d_cm = m2.getm();
    }
};

void meter ::operator=(centimeter c1)
{
    d_m = c1.getcm();
}

int main()
{
    meter m1, m2;
    centimeter c1, c2;
    c1.input();
    m1 = c1;
    m1.output();

    m2.input();
    c2 = m2;
    c2.output();

    return 0;
}
