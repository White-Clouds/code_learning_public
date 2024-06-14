#include<stdio.h>

void main() {
    int i, j, n;
    double sum = 0, jc = 1;
    printf("«Î ‰»Î£∫");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            jc = jc * j;
        sum = sum + jc;
        jc = 1;
    }
    printf("%.0f\n", sum);
}
