#include<iostream>
using namespace std;

class unary
{
    int a;

    public:

    void read()
    {
        cout<<"enter value of a";
        cin>>a;
    }

    void display()
    {
        cout<<"a="<<a<<endl;
    }

    void operator ++()
    {
        a=++a;
        
    }

    void operator ++(int)
    {
        a=a++;
    
    }
    
};

int main()
{
    
unary u;
u.read();
u.display();
++u;
u.display();
u++;
u.display();
u.display();


return 0;
}