#include<iostream>
using namespace std;

class vector
{
    int x,y;
public:
    vector(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    vector v1(3,5);            //implicit call
    vector v2 = vector(5,3);  //explicit call
    vector v3(v2);            //copy constructor
   
    v1.print();
    v2.print();
    v3.print();
    return 0;
}
