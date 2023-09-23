#include <iostream>
using namespace std;

const int i = 5;
class student
{
    string name;
    int rollno;
    int marks[i];

public:
    void getdata();
    void putdata();
};

void student ::getdata()
{
    cout << "enter name,rollno and marks";
    cin >> name;
    cin >> rollno;
    for (int a = 0; a < 5; a++)
        cin >> marks[a];
}

void student ::putdata()
{
    cout << "name:" << name << endl;
    cout << "rollno:" << rollno << endl
         << "marks:";
    for (int a = 0; a < 5; a++)
        cout << marks[a] << "\t";
}

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}