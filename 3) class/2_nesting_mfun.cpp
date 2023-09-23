#include <iostream>
#include <string>

using namespace std;

class student
{
  string name;
  int rollno;
  void putdata();
  
 
public:
 void getdata();
  
};

 void student :: putdata()
  {
    cout << name << endl
         << rollno;
  }
inline void student ::getdata()
{
  cin >> name >> rollno;
  putdata();
}

int main()
{
  student s1;
  s1.getdata();
  return 0;
}