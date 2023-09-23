#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int age;

    public:

    void set_details()
    {
        cout<<"enter student name and age\n";
        cin>>name>>age;
    }

     void put_details()
    {
        cout<<"name : "<<name<<"  age : "<<age<<endl;
    }
};

class engineering : public student
{
    protected:
    string collage;
    string degree;
    string branch;
    double fee;

    public:

    void set_eng()
    {
         cout<<"enter detalis for engineering student\n\n";
        set_details();
        cout<<"enter collage,degree,branch and fee per year\n";
        cin>>collage>>degree>>branch>>fee;
    }

     void put_eng()
    {
        put_details();
        cout<<"collage : "<<collage<<"  degree : "<<degree<<"  branch : "<<branch<<"  fee : "<<fee<<endl;
    }  
};

class medical : public student
{
    protected:
    string collage;
    string degree;
    double fee;

    public:

    void set_medi()
    {
        cout<<"enter detalis for medical student....\n\n";
        set_details();
        cout<<"enter collage,degree and fee\n";
        cin>>collage>>degree>>fee;
    }

     void put_medi()
    {
        put_details();
        cout<<"collage : "<<collage<<"  degree : "<<degree<<"  fee : "<<fee<<endl;
    }  
};

int main()
{
    engineering e1;
    medical m1;

    e1.set_eng();
    e1.put_eng();
    m1.set_medi();
    m1.put_medi();
    

return 0;
}