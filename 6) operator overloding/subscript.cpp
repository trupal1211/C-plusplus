#include <iostream>
using namespace std;

class arr
{
    int a[5];

public:
    arr(int s[])      // arr(int *s)  also use
    {
        int i;
        for (i = 0; i < 5; i++)
            a[i] = s[i];
    }

    int operator[](int k)
    {
        return (a[k]);
    }

    void display()
    {
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    }
};

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    arr A(x);

    A.display();

    return 0;
}