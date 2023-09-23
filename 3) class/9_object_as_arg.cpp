#include <iostream>
using namespace std;

class timee
{
    int hour;
    int minute;

public:
    void gettime()
    {
        cout << "enter hour and minute";
        cin >> hour >> minute;
    }
    void puttime()
    {
        cout << "time" << hour << ":" << minute << endl;
    }
    void sum(timee k1, timee k2)
    {
        hour = k1.hour + k2.hour;
        minute = k1.minute + k2.minute;
        if (minute > 60)
        {
            int t = hour * 60 + minute;
            hour = t / 60;
            minute = t % 60;
        }
    }
};

int main()
{
    timee t1, t2, t3;
    t1.gettime();
    t2.gettime();

    t3.sum(t1, t2); // try t1.sum(t1,t2);

    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}