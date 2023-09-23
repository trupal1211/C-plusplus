#include<iostream>
using namespace std;

class trupal
{
    int a,b;

    public:
    

    void read(int x,int y)
    {
        a=x;
        b=y;
    }
 
   operator int()
   {
      return a;
   }


};
 
int main()
{
    trupal t;
    t.read(4,7);
    int p;
    p=t;
    cout<<p;
}