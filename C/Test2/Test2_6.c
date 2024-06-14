#include <stdio.h>

void main() {
    int a, b, c;
    a = 100;
    b = (++a) - 2;
    a = 200;
    c = (a++) - 2;
    printf("a=%d  b=%d  c=%d\n", a, b, c);
}
