#include<iostream>

using namespace std;

class BaseN {
public:
    BaseN(int n) {
        baseN = n;
    }

    void Show() {
        cout << "baseN:" << baseN << endl;
    }

    int baseN;
};

class BaseA : public BaseN {
public:
    BaseA(int n) : BaseN(n) {}
};

class BaseB : public BaseN {
public:
    BaseB(int n) : BaseN(n) {}
};

class DerivedC : public BaseA, public BaseB {
public:
    DerivedC(int n1, int n2, int c) : BaseA(n1), BaseB(n2) {
        derived_c = c;
    }

    void Show() {
        cout << "derived_c:" << derived_c << endl;
    }

    int derived_c;
};

int main() {
    DerivedC c(1000, 1001, 3);
    c.BaseA::Show();
    c.BaseB::Show();
    c.Show();
    return 0;
}
