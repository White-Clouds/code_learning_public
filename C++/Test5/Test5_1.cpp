#include <iostream>

using namespace std;

class Clock {
public:
    void SetClock() {
        cin >> hour >> min >> sec;
    }

    void ShowTime() {
        cout << "hour:" << hour << endl;
        cout << "min:" << min << endl;
        cout << "sec:" << sec << endl;
    }

private:
    int hour;
    int min;
    int sec;
};

class Date : public Clock {
public:
    void SetDate() {
        cin >> year >> month >> day;
    }

    void ShowTime1() {
        cout << "year:" << year << endl;
        cout << "month:" << month << endl;
        cout << "day:" << day << endl;

    }

private:
    int year;
    int month;
    int day;
};

int main() {
    Date d;
    d.SetDate();
    d.SetClock();
    d.ShowTime1();
    d.ShowTime();
    return 0;
}
