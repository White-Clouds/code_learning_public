#include <stdio.h>

#define M 3
#define N 4

void main() {
    int a[M][N] = {{3, 2,  1, 8},
                   {0, -3, 1, 4},
                   {5, 7,  9, 0}};
    int b[M][N] = {{2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};
    int i, j, c[M][N];
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            c[i][j] = a[i][j] + b[i][j];
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", c[i][j]);
        printf("\n");
    }
    printf("\n");
}
