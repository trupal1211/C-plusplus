#include<iostream>
using namespace std;

class student 
{
    char name[20];
    int id;
public:
    void getdata()
    {
        cout<<"enter name and id";
        cin>>name>>id;
    }
    void putdata()
    {
        cout<<"name:"<<name<<endl<<"id:"<<id<<endl;
    }
};

int main()
{
    student s[3];
    int i=0;
    for(i=0;i<3;i++)                 //or read and dispaly using 1 loop     
      s[i].getdata();                
    for(i=0;i<3;i++)                   
      s[i].putdata();                

   return 0;
}