#include<iostream>

using namespace std;

class Time {
private:
    int hour;
    int minute;
public:
    Time() {
        hour = 0;
        minute = 0;
    }

    Time(int h, int m);

    Time operator+(Time &t2);

    void display();
};

Time::Time(int h, int m) {
    hour = h;
    minute = m;
}

Time Time::operator+(Time &t2) {
    Time t;
    t.hour = hour + t2.hour;//t.hour=this->hour+t2.hour;
    t.minute = minute + t2.minute;//t.minute=this-.minute+t2.minute;
    if (t.minute >= 60) {
        t.minute -= 60;
        t.hour++;
    }
    return t;
}

void Time::display() {
    cout << hour << "Ð¡Ê±" << minute << "·ÖÖÓ" << endl;
}

int main() {
    Time t1(3, 30), t2(2, 40), t;
    t = t1 + t2;
    cout << "t1+t2=";
    t.display();
    return 0;
}
