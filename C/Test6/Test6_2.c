#include <stdio.h>

int fun(int x, int y) {
    int z;
    z = x + y;
    return (z);
}

void main() {
    int a = 7, b = 2, c;
    c = fun((a, b++, a + b), b);
    printf("a=%d,b=%d,c=%d\n", a, b, c);
}
