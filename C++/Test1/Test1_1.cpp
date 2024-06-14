#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "整数格式的输出:" << endl;
    int a = 123;
    cout << "hex:" << hex << setiosflags(ios::uppercase) << a << endl;
    cout << setw(10) << setfill('#') << setiosflags(ios::right) << a << endl;
    cout << "oct:" << oct << a << endl;
    cout << setw(10) << setbase(8) << setfill('*') << resetiosflags(ios::right) << setiosflags(ios::left) << a << endl;
    cout << "浮点型格式的输出：" << endl;
    double x = 2019.123456789;
    cout << "原值:x=2019.123456789" << endl;
    cout << setiosflags(ios::fixed);
    cout << "setiosflags(ios::fixed):" << endl;
    cout << "x=\t" << x << endl;
    cout << "setprecision(1):" << endl;
    cout << setprecision(1) << "\tx=" << x << endl << endl;
    return 0;
}
