#include <iostream>
#include <string>
using namespace std;

class student
{
  string name;
  int rollno;
  void putdata(); // private member function
public:
  void getdata();
};

inline void student ::getdata()
{
  cin >> name >> rollno;
  putdata(); // simple call , no object use     , nesting of function
}

inline void student ::putdata()
{
  cout << name << endl
       << rollno;
}

int main()
{
  student s1;
  s1.getdata();
  // s1.putdata(); //object can not access private members
}