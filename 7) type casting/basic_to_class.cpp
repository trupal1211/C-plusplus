#include<iostream>
using namespace std;

class trupal
{
    int a , b;

    public:

    trupal(){}
    trupal(int x)
    {
        a=0;
        b=x;
    }
    
    void display()
    {
        cout<<"a = "<<a<<"  , b = "<<b<<endl;
    }

};

int main()
{
    trupal t;
    int x=5;
    t=x;
    t.display();
}

