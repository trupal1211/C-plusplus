//mathematical operations on string

#include<iostream>
using namespace std;

class string
{
    int *p;
    int len;

    public:

    string(){p=0;len=0;}
    string(char *s)
    {
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
    }

    friend string operator +( string &s , string &t);
    friend int operator <=( string &s , string &t);
};

string operator +(string &s , string &t)
{

}
int main()
{
    



return 0;
}