#include<iostream>
using namespace std;

class B
{
    int a;

    public:
    int b;

    void set_ab()
    {
        cout<<"enter a and b\n";
        cin>>a>>b;
    }

    int get_a()
    {
        return a;
    }
};

class D : private B      
{                     
    int c;

    public:

    void mul()
    {
        set_ab();
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
    d1.mul();
    d1.show();
    //d1.b=20;         //d1.b will not work , because now it is a private member of class D
    d1.mul();
    d1.show();

return 0;
}