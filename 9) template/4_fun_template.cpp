#include<iostream>
using namespace std;

template<class T>
void swp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
   int x,y;
   cout<<"enter x and y\n";
   cin>>x>>y;
   
   swp(x,y);
   cout<<x<<" "<<y<<endl;
  
return 0;
}