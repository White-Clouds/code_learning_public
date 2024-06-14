#include <stdio.h>

#define N 5

void main() {
    float a[N], *p, max, sum;
    int i;
    p = a;
    for (i = 0; i < N; i++)
        scanf("%f", p++);
    p = a;
    max = sum = *p;
    for (i = 0; i < N; i++) {
        if (*(++p) > max)
            max = *p;
        sum = sum + *p;
    }
    printf("max=%6.2f,  aver=%6.2f\n", max, sum / N);
}
