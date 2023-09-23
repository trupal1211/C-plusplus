#include<iostream>
using namespace std;


class trupal
{
    int a,b;

    public:

    void read(int a1,int b1)
    {
        a=a1;
        b=b1;
    } 
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }

    void display()
    {
       cout<<"a = "<<a<<" b = "<<b<<endl;
    }

};

class krunal
{
    int m,n;
    
    public:
 
//--------using constructor----------------//

    krunal(){}
    krunal(trupal t1)
    { 
        m=t1.geta();
        n=t1.getb();
    }

//----------using operator overloding-----------------// 

    void operator =(trupal temp)  
    {
        m=temp.geta()*2;   //temp.a not accessable
        n=temp.getb()*2;
    }

    void display()
    {
       cout<<"m = "<<m<<" n = "<<n<<endl;
    }
};

int main()
{
    trupal t;
    krunal k;
    t.read(4,5);
    t.display();
    k=t;
    k.display();
    

}



