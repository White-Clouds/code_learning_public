#include <stdio.h>

void main() {
    int i, n = 10, a[10];
    float sum = 0.0, aver;
    printf("input a[10]:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
        if (i % 3 == 2)
            printf("\n");
    }
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    aver = sum / 10;
    printf("\naver=%6.2f\n", aver);
}
