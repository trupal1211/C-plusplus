#include<iostream>
using namespace std;

class number
{
    int x,y,z;
public:
    number(int a,int b=8,int c=9)
    {
        x=a;
        y=b;
        z=c;
    }
    void print()
    {
        cout<<"x="<<x<<" , "<<"y="<<y<<" , "<<"z="<<z<<endl;
    }
};

int main()
{
    number n1(10);
    n1.print();

    number n2(10,11);
    n2.print();

    number n3(10,11,12);
    n3.print();

    return 0;
}