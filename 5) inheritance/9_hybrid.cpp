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

class sport
{
    protected:

    float score;

    public:
    void set_score()
    {
        cout<<"enter sports score\n";
        cin>>score;
    }

    void put_score()
    {
        cout<<"sports score = "<<score<<endl;
    }
};

class result : public exam , public sport
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
    s1.set_score();
    s1.put_num();   
    s1.put_mark();
    s1.put_score();
    s1.total_mark();

return 0;
}
