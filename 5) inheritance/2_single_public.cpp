#include<iostream>
using namespace std;

class B
{
    int a;

    public:
    int b;

    void set_ab()
    {
        a=5;b=10;
    }

    int get_a()
    {
        return a;
    }
};

class D : public B     // class D is public derivation of th ebasse class
{                      // class B is publicaly inherited by class D
    int c;

    public:

    void mul()
    {
        c=b*get_a();
    }

    void show()
    {
        cout<<"a ="<<get_a()<<"  b = "<<b<<"  c = "<<c<<endl;
    }
};


int main()
{
    D d1;
    d1.set_ab();
    d1.mul();
    d1.show();
    d1.b=20;           //d1.a is not accessable 
    d1.mul();
    d1.show();

return 0;
}