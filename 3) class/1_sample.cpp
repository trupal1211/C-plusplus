#include <iostream>
#include <string>

using namespace std;

class student
{
  string name;
  int rollno;

public:
  void getdata();
  void putdata()
  {
    cout << name << endl
         << rollno;
  }
};

inline void student ::getdata()
{
  cin >> name >> rollno;
}

int main()
{
  student s1;
  s1.getdata();
  s1.putdata();

  student s2;
  s2.getdata();
  s2.putdata();
  return 0;
}