#include <stdio.h>

void sum(int a, int b, int *c) {
    int t;
    t = a + b;
    *c = t;
}

void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void main() {
    int a, b, c;
    void (*p)();
    printf("please enter a,b:");
    scanf("%d,%d", &a, &b);
    p = sum;
    (*p)(a, b, &c);
    printf("sum=%d\n", c);
    p = swap;
    (*p)(&a, &b);
    printf("a=%d,b=%d\n", a, b);
}
