#include <iostream>

using namespace std;

class BaseA {
public:
    BaseA(int a) : base_a(a) {
        cout << "BaseA constructor" << endl;
    }

    ~BaseA() {
        cout << "BaseA destructor" << endl;
    }

protected:
    int base_a;
};

class BaseB {
public:
    BaseB(int b) : base_b(b) {
        cout << "BaseB constructor" << endl;
    }

    ~BaseB() {
        cout << "BaseB destructor" << endl;
    }

protected:
    int base_b;
};

class DerivedC : public BaseA, public BaseB {
public:
    DerivedC(int a, int b, int c) : BaseA(a), BaseB(b), derived_c(c) { cout << "Derived construtor" << endl; }

    ~DerivedC() {
        cout << "Derived destructor" << endl;
    }

    void show() {
        cout << base_a << "," << base_b << "," << derived_c << endl;
    }

private:
    int derived_c;
};

int main() {
    DerivedC c(1, 2, 3);
    c.show();
    return 0;
}
