#include<iostream>
using namespace std;

class B
{
    public:
        int var_b=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_b "<<var_b<<endl;
        }
};

class D : public B
{
    public:
            int var_d=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_b "<<var_b<<endl;
                cout<<"2 Dispalying Derived class variable var_d "<<var_d<<endl;
            }
};

    int main()
    {
    B *b_ptr;
    D obj_d;
    b_ptr = &obj_d;
    b_ptr->display();
    return 0;
   }

