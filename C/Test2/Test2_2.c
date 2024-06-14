#include <stdio.h>

void main() {
    char c;
    int m = 0165, a = 321, b = -10;
    c = a;
    printf("m1=%d,m2=%x\n", m, m);
    printf("c=%c\n", c);
    printf("a=%d,%o,%x\n", a, a, a);
    printf("b:%d,%u,%x\n", b, b, b);
}
