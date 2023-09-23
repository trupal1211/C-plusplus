#include <iostream>
using namespace std;

class M
{
protected:
    int m;

public:
    void set_m()
    {
        cin >> m;
    }
};

class N
{
protected:
    int n;

public:
    void set_n()
    {
        cin >> n;
    }
};

class P : public M, public N
{
public:
    void display()
    {
        cout << " m = " << m << endl;
        cout << " n = " << n << endl;
        cout << " m*n = " << m * n << endl;
        cout << " m/n = " << m / n << endl;
    }
};

/*
//================= the inherited derived class will look somthing like this =========================//
class P
{
    protected:
    int m;   is derived from M
    int n;   is derived from N

    public:

    void set_m();       is derived from M
    void set_n();       is derived from N
    void display();     own member
}
*/
int main()
{
    P p;
    p.set_m();
    p.set_n();
    p.display();

    return 0;
}
