//call by referance using referance variable and pointer variable

#include <iostream>
using namespace std;

void swap(int *x, int *y)        //   void swap(int &x,int &y)
{                                //   {
    int temp = *x;               //        int temp=x;
    *x = *y;                     //        x=y;
    *y = temp;                   //        y=temp;
}                                //    }
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "value of a and b is " << a << "" << b << endl;
    swap(&a, &b);                //    swap(a,b);
    cout << "value of a and b is " << a << "" << b;

    return 0;
}
