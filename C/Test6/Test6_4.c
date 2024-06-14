#include <stdio.h>

double qfun(double x, int n) {
    if (n == 0)
        return (1);
    else if (n == 1)
        return (x);
    else
        return (2 * x * qfun(x, n - 1) - qfun(x, n - 2));
}

void main() {
    double x;
    int n;
    printf("input x:");
    scanf("%lf", &x);
    for (n = 0; n < 5; n++) {
        printf("n=%2d   ", n + 1);
        printf("%lf\n", qfun(x, n));
    }
}
