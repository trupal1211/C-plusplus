#include<iostream>
using namespace std;

class student
{
    protected:

    int roll_no;

    public:

     void set_num()
     {
         cout<<"enter roll number\n";
         cin>>roll_no;
     }

     void put_num()
     {
         cout<<"roll_no = "<<roll_no<<endl;
     }
};

class exam : public student
{
    protected:

    float maths,physics;

    public:

    void set_mark()
    {
        cout<<"enter mark of maths and physics\n";
        cin>>maths>>physics;
    }

    void put_mark()
    {
        cout<<"maths = "<<maths<<"  physics = "<<physics<<endl;
    }
};

class result : public exam
{
     protected:

     float t_mark;

     public:

     void total_mark()
     {
        t_mark = maths + physics;
        // put_num();  put_mark();
        cout<<"percentage = "<<t_mark/2<<"%";
     }
};

int main()
{
    result s1;
    s1.set_num();
    s1.set_mark();
    s1.put_num();   
    s1.put_mark();
    s1.total_mark();

return 0;
}



//---------------- private data-member --------------------//


/*
#include<iostream>
using namespace std;

class student
{
    int roll_no;

    public:

     void set_num()
     {
         cout<<"enter roll number\n";
         cin>>roll_no;
     }

     void put_num()
     {
         cout<<"roll_no = "<<roll_no<<endl;
     }
};

class exam : public student
{
    float maths,physics;

    public:

    void set_mark()
    {
        cout<<"enter mark of maths and physics\n";
        cin>>maths>>physics;
    }

    void put_mark()
    {
        cout<<"maths = "<<maths<<"  physics = "<<physics<<endl;
    }
    
    int get_m()
    {
        return maths;
    }

      int get_p()
    {
        return physics;
    }
};

class result : public exam
{
    float t_mark;

     public:

     void total_mark()
     {
        t_mark = get_m() + get_p();
        // put_num();  put_mark();
        cout<<"total mark = "<<t_mark/2;
     }
};

int main()
{
    result s1;
    s1.get_num();
    s1.get_mark();
    s1.put_num();   
    s1.put_mark();
    s1.total_mark();

return 0;
}
*/