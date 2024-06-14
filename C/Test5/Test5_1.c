#include <stdio.h>

void main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 7, 8, 9}, i;
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    printf("\n");
    for (i = 9; i >= 0; i--)
        printf("%3d", a[i]);
    printf("\n");
}
