#include<iostream>
using namespace std;

template<class T1,class T2>
class vector
{
    T1 x;
    T2 y;

public:

void read()
{
    cin>>x>>y;
}

void display()
{
    cout<<x<<" "<<y<<endl;
}
};

int main()
{
    vector <int,float> v1;
    v1.read();
    v1.display();

return 0;
}