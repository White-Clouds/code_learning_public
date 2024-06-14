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

class Date : private Clock {
public:
    void SetDate() {
        cin >> year >> month >> day;
        SetClock();
    }

    void ShowTime1() {
        cout << "year:" << year << endl;
        cout << "month:" << month << endl;
        cout << "day:" << day << endl;
        ShowTime();
    }

private:
    int year;
    int month;
    int day;
};

int main() {
    Date d;
    d.SetDate();
    d.ShowTime1();
    return 0;
}
