#include <iostream>
using namespace std;

class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "\n alpha constructed";
    }
    void show_alpha(void)
    {
        cout << " x = " << x << "\n";
    }
};

class beta
{
    float p, q;

public:
    beta(float a, float b) : p(a), q(b + p)
    {
        cout << "\n beta constructed";
    }
    void show_beta(void)
    {
        cout << " p = " << p << "\n";
        cout << " q = " << q << "\n";
    }
};

class gamma : public beta, public alpha
{
    int u, v;

public:
    gamma(int a, int b, float c) : alpha(a * 2), beta(c, c), u(a)
    {
        v = b;
        cout << "\n gamma constructed";
    }
    void show_gamma(void)
    {
        cout << " u = " << u << "\n";
        cout << " v = " << v << "\n";
    }
};
int main()
{
    gamma g(2, 4, 2.5);
    cout << "\n\n Display member values "
         << "\n\n";
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
};