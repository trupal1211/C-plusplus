#include<iostream>
using namespace std;

class alpha
{
    int x;

    public:
   alpha(int a)
   {
    x=a;
    cout<<"alpha initialized\n";
   }

   void show_x()
   {
    cout<<"x = "<<x<<endl;
   }
};

class beta
{
    int y;

    public:
   beta(int b)
   {
    y=b;
    cout<<"beta initialized\n";
   }
    void show_y()
   {
    cout<<"y = "<<y<<endl;
   }
};

class gamma : public alpha , public beta   // base-class constructor is called in order of declaration here
{
    int m,n;

    public:

    gamma(int a,int b,int c,int d):
   beta(b), alpha(a)                   // here not effect the order of alpha and beta , if you interchange
    {
        m=c;
        n=d;
        cout<<"gamma initialized\n";
   }

    void show_mn()
   {
    cout<<"m = "<<m<<"   n = "<<n<<endl;
   }
};

int main()
{
    gamma g(1,2,3,4);
    g.show_x();
    g.show_y();
    g.show_mn();

return 0;
}

