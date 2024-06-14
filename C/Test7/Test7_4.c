#include <stdio.h>

void swap(int *q1, int *q2) {
    int t;
    t = *q1;
    *q1 = *q2;
    *q2 = t;
}

void main() {
    int a, b, *p1, *p2;
    printf("input a,b:");
    scanf("%d,%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
        swap(p1, p2);
    printf("%d,%d\n", *p1, *p2);
}
