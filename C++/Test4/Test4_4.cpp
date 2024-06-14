#include <iostream>

using namespace std;

template<class T1, class T2>
class add {
public:
    add(T1 a, T2 b) {
        x = a;
        y = b;
    }

    T2 sum();

private:
    T1 x;
    T2 y;
};

template<class T1, class T2>
T2 add<T1, T2>::sum() {
    return x + y;
}

int main() {
    add<int, float> a(3, 4.5);
    cout << a.sum() << endl;
    add<char, int> b('A', 32);
    cout << b.sum() << endl;
    return 0;
}
