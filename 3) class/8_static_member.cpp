#include<iostream>
using namespace std;

class item
{
   int num;
   static int count;
    
public:
    void getdata()
    {
        cin>>num;
        count++;
    }
    int getcount()
    {
        return count;
    }

    static void printcount()
    {
        cout<<"value of count is"<<count<<endl;
        //cout<<num;   give an error
    }
};
 
int item:: count; //static member variable must be defined 
                  //...outside side the class defination.
//because static data member are store separately rather than as a part of an object

int main()
{
    item a,b,c;

    cout<<a.getcount();
    cout<<b.getcount(); 
    cout<<c.getcount();

   /* a.getdata();                               
    b.getdata();                                
    c.getdata();                                  
                                                  
    cout<<a.getcount();                             
    cout<<b.getcount();                              
    cout<<c.getcount();  */  

    a.getdata();       
    cout<<a.getcount();
    b.getdata();                               
    cout<<b.getcount();   
    c.getdata();                           
    //cout<<c.getcount();     other option is static member functiom
    item:: printcount();

    return 0;
}



    



