#include <stdio.h>

void main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = 0;
    printf("%d,%d\n", !a * b, !c);
    printf("%d,%d\n", a && b - 10, a + c > b && b > a);
    printf("%d\n", a);
}
