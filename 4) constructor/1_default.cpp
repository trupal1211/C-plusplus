#include<iostream>
using namespace std;

class number
{
    int x;
    int y;
public:
  number(void)
  {
    x=10;
    y=0;
  }
  void printnumber()
  {
    cout<<"x"<<x<<endl<<"y"<<y<<endl;
  }
};

int main()
{
   number n1;
   n1.printnumber();

   return 0;
}


boi