#include <stdio.h>

#define N 10

void main() {
    int a[10];
    int i, j, k, t;
    printf("please input %d number:\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < N; i++)
        printf("%4d", a[i]);
    printf("\n");
    for (i = 0; i < N - 1; i++) {
        k = i;
        for (j = i + 1; j < N; j++)
            if (a[k] > a[j])
                k = j;
        if (k != i) {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
    for (i = 0; i < N; i++)
        printf("%4d", a[i]);
    printf("\n");
}
