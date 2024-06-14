#include<iostream>

using namespace std;

int main() {
    long fun(int n);
    int n;
    long y;
    cout << "pleas input n:";
    cin >> n;
    y = fun(n);
    cout << n << "!=" << y << endl;
    return 0;
}

long fun(int n) {
    long f;
    if (n < 0)
        cout << "date error!" << endl;
    else if ((n == 1) || (n == 0))
        f = 1;
    else
        f = n * fun(n - 1);
    return f;
}
