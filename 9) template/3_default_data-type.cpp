#include<iostream>
using namespace std;

template <class T1=int , class T2=int >   // gefault data-type specified as int
class vector
{
    T1 x;
    T2 y;

    public:
    vector(){}
    vector(T1 a,T2 b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
   vector<float> v1(3.5,35);
   vector<> v2('a',12);       // default arg. will work
   vector<int,char>v3(100,'w');

   v1.display(); 
   v2.display(); 
   v3.display(); 
return 0;
}