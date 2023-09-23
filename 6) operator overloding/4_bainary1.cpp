#include <iostream>
using namespace std;

class vector
{
    int a, b;

public:
    void read()
    {
        cout << "enter a and b";
        cin >> a >> b;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }

    friend vector operator+(vector, vector);
    friend vector operator-(vector, vector);
};

vector operator+(vector x, vector y)
{
    vector t;
    t.a = x.a + y.a;
    t.b = x.b + y.b;
    return t;
}

vector operator-(vector x, vector y)
{
    vector t;
    t.a = x.a - y.a;
    t.b = x.b - y.b;
    return t;
}

int main()
{
    vector v1, v2, v3;
    v1.read();
    v2.read();
    v1.display();
    v2.display();
    v3 = v1 + v2;
    v3.display();
    v3 = v1 - v2;
    v3.display();

    return 0;
}