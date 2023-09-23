#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex *ptr,a;
    ptr=&a;
    (*ptr).setData(1, 54); 
    (*ptr).getData(); 

    // same as

    ptr->setData(1,54);
    ptr->getData();
    



    return 0;
}
