#include <stdio.h>

#define N 10

void fun(int a[], int b[], int n) {
    int i;
    for (i = 0; i < 6; i++)
        b[i] = 0;
    for (i = 0; i < n; i++) {
        if (a[i] < 10)
            b[0]++;
        else if (a[i] >= 10 && a[i] < 20)
            b[1]++;
        else if (a[i] >= 20 && a[i] < 30)
            b[2]++;
        else if (a[i] >= 30 && a[i] < 40)
            b[3]++;
        else if (a[i] >= 40 && a[i] < 50)
            b[4]++;
        else if (a[i] >= 50 && a[i] < 60)
            b[5]++;
    }
}

void main() {
    int a[N], b[6], k;
    for (k = 0; k < N; k++)
        scanf("%d", &a[k]);
    fun(a, b, N);
    for (k = 0; k < 6; k++)
        printf("%5d\n", b[k]);
}
