// differant typr of creating a string ocject.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;       // creating empty string object
    s1 = "hello";    // using string constant

    string s2("new");     // using string constant
    string s3("delhi");

    string s4;
    s4 = s2 + s3;        //concatenating string

    string s5;
    s5 = s4;           // assign value to string object 

    string s6(s1);     

    string s7;
    cout<<"enter s7 string";
    cin >> s7;        // read from keyboard    //read only one word

    string s8;
    cout<<"enter s8 string";
    getline(cin , s8);  // read from keyboard   //read a line of text(containing blanks)

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;
    cout << "s6 = " << s6 << endl;
    cout << "s7 = " << s7 << endl;
    cout << "s8 = " << s8 << endl;

    return 0;
}