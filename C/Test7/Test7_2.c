#include <stdio.h>

void main() {
    int i, k, a[12], *p;
    p = a;
    for (i = 0; i < 12; i++)
        scanf("%d", p++);
    p = a;
    for (i = 0; i < 12; i++) {
        printf("%4d", *p++);
        if ((i + 1) % 4 == 0)
            printf("\n");
    }
}
