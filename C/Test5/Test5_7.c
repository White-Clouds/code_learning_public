#include <stdio.h>
#include <math.h>

#define N 3

void main() {
    int a[N][N], b[N][N];
    int i, j, sum = 0, product = 1, loc, max;
    printf("input a %d*%d matrix:\n", N, N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    max = abs(a[0][0]);
    for (i = 0; i < N; i++) {
        sum = sum + a[i][i];
        product = product * a[i][i];;
        if (abs(a[i][i]) >= max) {
            max = abs(a[i][i]);
            loc = i;
        }
        for (j = 0; j < N; j++)
            b[i][j] = a[j][i];
    }
    printf("output matrix a:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("output matrix b:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }
    printf("\nsum=%d", sum);
    printf("\nproduct=%d", product);
    printf("\nmax=%d,row=%d,col=%d", max, loc, loc);
    printf("\n");
}
