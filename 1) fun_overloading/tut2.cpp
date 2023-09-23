//return by referance

#include<iostream>
using namespace std;

int& swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    return x;
}
void show(int a,int b)
{
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    show(a,b);
    swap(a,b);
    show(a,b);
    swap(a,b)=100;
    show(a,b);

return 0;
}