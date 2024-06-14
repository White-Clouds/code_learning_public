#include <iostream>

using namespace std;

float area(float r) {
    return 3.14 * r * r;
}

float area(float a, float h) {
    return a * h / 2;
}

int area(int x, int y) {
    return x * y;
}

int main() {
    float r = 3.5, a = 2.5, h = 4;
    int x = 3, y = 5;
    float s_cir, s_tri;
    int s_rect;
    cout << "output:" << endl;
    s_cir = area(r);
    cout << "s_cir=" << s_cir << endl;
    s_tri = area(a, h);
    cout << "s_tri=" << s_tri << endl;
    s_rect = area(x, y);
    cout << "s_rect=" << s_rect << endl;
    return 0;
}
