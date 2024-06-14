#include <iostream>
#include <string>

using namespace std;

class Clock {
public:
    Clock(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    void SetClock() {
        cin >> hour >> min >> sec;
    }

    void ShowTime() {
        cout << "hour:" << hour << endl;
        cout << "min:" << min << endl;
        cout << "sec:" << sec << endl;
    }

protected:
    int hour;
    int min;
    int sec;
};

class Date : public Clock {
public:
    Date(int h, int m, int s, string w) : Clock(h, m, s) {
        week = w;
    }

    void SetDate() {
        cin >> week;
        SetClock();
    }

    void ShowTime1() {
        cout << "week:" << week << endl;
        ShowTime();
    }

private:
    string week;
};

int main() {
    Date d(2019, 7, 31, "星期三");
    d.ShowTime1();
    return 0;
}
