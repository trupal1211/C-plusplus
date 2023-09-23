#include<iostream>
using namespace std;

class Base{
       void f1(){cout<<"f1";}
    protected:    // treat as a private but able to inherite
        int a;
        void f2(){cout<<"f2";}
    public:
        void f3(){cout<<"f3";}

};

//---------here, Base-class is inherited in derived-class in protected-mode-----------//


class Derived: protected Base
{
    void f4(){cout<<"f4";}

    protected:
    void f5(){cout<<"f5";}

    public:
    void f6(){cout<<"f6";} 
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
   
   // d.f1();  error - private can not inherite
   // d.f2();  error - become a protected-member in derived , therefore not accessble
   // d.f3();  error - become protected-member in derived   
   // d.f4();  error - private can not accessiable    
   // d.f5();  error - protected can not accessiable   
   d.f6();   // only valid          

    return 0;
}

