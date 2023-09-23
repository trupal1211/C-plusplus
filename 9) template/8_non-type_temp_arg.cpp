#include<iostream>
using namespace std;

template<class T , int n >
class mul
{
 T x;
 T ans;

public:
 mul(T a)
 {
    x=a;
 }
 
 void result()
 {
    ans=x*n;
    cout<<"ans = "<<ans;
 }
   
};

int main()
{
    mul<int,10> m1(5);
    m1.result();

return 0;
}
