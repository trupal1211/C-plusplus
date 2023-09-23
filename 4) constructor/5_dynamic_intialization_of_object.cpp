#include <iostream>
using namespace std;

class bank
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bank(){}                    // do nothing constructor
    bank(int p, int y, float r); // r can be like 0.04
    bank(int p, int y, int r);  // r can be like 4
    void show();
};

bank ::bank(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

     for (int i = 0; i < y ; i++)
     {
         returnValue = returnValue +  returnValue*r;
     }
    

}

bank ::bank(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y ; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

void bank ::show()
{
    cout << "principal amount was" << principal << " return value after " << years << "years is" << returnValue << endl;
}

int main()
{
    int p, y;
    float r;
    int R;

    cout << "enter the value of p,y and r";
    cin >> p >> y >> r;
    bank b1(p, y, r);
        b1.show();

    cout << "enter the value of p,y and R";
    cin >> p >> y >> R;
    bank b2(p, y, R);
        b2.show();

    return 0;
}