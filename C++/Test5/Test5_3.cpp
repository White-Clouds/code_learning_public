#include <iostream>
#include <string>

using namespace std;

class clock {
public:
    void setclock() {
        cin >> hour >> min >> sec;
    }

    void showtime() {
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

class date : public clock {
public:
    void setdate() {
        cin >> year >> month >> day >> week;
        setclock();
    }

    void showtime1() {
        cout << "year:" << year << endl;
        cout << "month:" << month << endl;
        cout << "day:" << day << endl;
        cout << "week" << week << endl;
        showtime();
    }

private:
    int year;
    int month;
    int day;
};

int main() {
    date d;
    d.setdate();
    d.showtime1();
    return 0;
}
