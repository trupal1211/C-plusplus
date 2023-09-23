#include<iostream>
using namespace std;

class vector
{
    int a,b;
    
public:

    friend istream& operator >>(istream& input,vector &x);
    friend ostream& operator <<(ostream& output,vector &y);

};

istream& operator >>(istream& input,vector &x)
{
    input>>x.a>>x.b;        // instande of input , any can used
    return input;
}

ostream& operator <<(ostream& output,vector &x)
{
    output<<x.a<<" "<<x.b;
    return output;
}

int main()
{
    vector v;
    cin>>v;
    cout<<v;

return 0;
}

