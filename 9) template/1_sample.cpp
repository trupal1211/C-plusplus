#include<iostream>
using namespace std;

template<class T>
class vector
{
    T a,b;

public:

    void read()
    {
        cin>>a>>b;
    }

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{

 vector<int> v1;
 v1.read();
 v1.display();

vector<float> v2;
v2.read();
v2.display();  

return 0;
}