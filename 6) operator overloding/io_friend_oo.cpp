#include <iostream>
using namespace std;

class vector
{
    int a, b;

public:
    friend vector operator+(vector, vector);
    friend vector operator-(vector, vector);

    friend istream &operator>>(istream &input, vector &x);
    friend ostream &operator<<(ostream &output, vector &y);
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

istream &operator>>(istream &input, vector &x)
{
    input >> x.a >> x.b; // instande of input , any can used
    return input;
}

ostream &operator<<(ostream &output, vector &x)
{
    output << x.a << " " << x.b << endl;
    return output;
}

int main()
{
    vector v1, v2, v3;
    cin >> v1;
    cin >> v2;
    cout << v1;
    cout << v2;
    v3 = v1 + v2;
    cout << v3;
    v3 = v1 - v2;
    cout << v3;
    ;

    return 0;
}