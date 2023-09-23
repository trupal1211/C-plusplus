#include<iostream>
using namespace std;

template<class T>
void dispaly(T a)
{
    cout<<"overloaded template display 1: "<<a<<endl;
}

template<class T1,class T2>
void display(T1 a,T2 b)
{
    cout<<"overloaded template display 2: "<<a<<" ,"<<b<<endl;
}

void dispaly(int a)
{
    cout<<"Explicit display: "<<a<<endl;
}

int main()
{
    dispaly(100);
    dispaly(100.01);
    display("red",100.34);

return 0;
}

// rules:

// 1) first call ordinary function that have an exact match.
// 2) call a template function that could be created with exact match.

// no automatic conversions are applied to arg. on the temp-function. 