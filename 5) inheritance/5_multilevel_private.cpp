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

class exam : student
{
    float maths,physics;

    public:

    void set_mark()
    {
        set_num();
        cout<<"enter mark of maths and physics\n";
        cin>>maths>>physics;
    }

    void put_mark()
    {
        put_num();
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

class result : exam
{
    float total;

     public:

     void total_mark()
     {
       set_mark();
       total = get_m() + get_p();
       put_mark();
       cout<<"total mark = "<<total/2<<"%";
     }
};

int main()
{
    result s1;
    s1.total_mark();

return 0;
}