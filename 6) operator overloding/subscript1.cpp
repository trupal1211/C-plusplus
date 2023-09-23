//

#include<iostream>
using namespace std;

const int MAX=20;

class array
{
    int a[MAX];

    public:

    void get(int n, int value)
    {
        if(n<0||n>=MAX)
          cout<<"indet out of bound";
        else 
          a[n]=value;
    }
    
    int display(int n)
    {
        if(n<0||n>=MAX)
          cout<<"index out of bound";
        else
          return a[n];
    }
    
};

int main()
{
    array a1;

    for(int i=0;i<MAX;i++)
      a1.get(i,i*10);
    for(int i=0;i<MAX;i++)
    {
        int x=a1.display(i);
        cout<<x<<" ";
    }



return 0;
}