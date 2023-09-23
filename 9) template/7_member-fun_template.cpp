#include<iostream>
using namespace std;

template <class T>
class vector
{
    T x,y;

    public:

//template<class T>     optional 
void read(T a,T b)
{
    x=a;
    y=b;
    
}
    void display();
};


template<class T1>               //necessary
void vector<T1> :: display()
{
    cout<<x<<" "<<y;
}


int main()
{
    vector<int> v;
    v.read(46,75);
    v.display();

return 0;
}