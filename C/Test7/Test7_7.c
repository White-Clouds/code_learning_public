#include <stdio.h>

int sum(int x, int y) {
    return (x + y);
}

int sub(int x, int y) {
    return (x - y);
}

int mul(int x, int y) {
    return (x * y);
}

int fun(int m, int n, int (*p)()) {
    int c;
    c = (*p)(m, n);
    return (c);
}

void main() {
    int a, b, t1, t2, t3;
    printf("please input a,b:");
    scanf("%d,%d", &a, &b);
    t1 = fun(a, b, sum);
    t2 = fun(a, b, sub);
    t3 = fun(a, b, mul);
    printf("%d+%d=%d\n", a, b, t1);
    printf("%d-%d=%d\n", a, b, t2);
    printf("%d*%d=%d\n", a, b, t3);
}
