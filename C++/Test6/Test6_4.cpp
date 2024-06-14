#include <iostream>
#include <string>

using namespace std;

class BaseN {
public:
    BaseN() {
        n = "N";
        cout << "BaseN=" << n << endl;
    }

protected:
    string n;
};

class BaseA : virtual public BaseN {
public:
    BaseA() {
        n = "A";
        cout << "BaseA=" << n << endl;
    }
};

class BaseB : virtual public BaseN {
public:
    BaseB() {
        n = "B";
        cout << "BaseB=" << n << endl;
    }
};

class DerivedC : public BaseA, public BaseB {
public:
    DerivedC() { cout << "Derived n =" << n << endl; }
};

int main() {
    DerivedC c;
    return 0;
}
