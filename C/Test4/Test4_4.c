#include <stdio.h>

void main() {
    float a = 2, b = 1, c;
    int k = 1, n;
    float s = 0;
    printf("input n=");
    scanf("%d", &n);
    while (k <= n) {
        s = s + 1.0 * a / b;
        c = a;
        a += b;
        b = c;
        k++;
    }
    printf("s=%f\n", s);
}
