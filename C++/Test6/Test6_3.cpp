#include <iostream>
#include <string>

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
protected:
    string week;
};

class Date : protected Clock {
public:
    void SetDate() {
        cin >> year >> month >> day >> week;
        SetClock();
    }

    void ShowTime1() {
        cout << "year:" << year << endl;
        cout << "month:" << month << endl;
        cout << "day:" << day << endl;
        cout << "week:" << week << endl;
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
