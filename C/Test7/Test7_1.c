#include <stdio.h>

void main() {
    static int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, *p;
    p = a;
    for (k = 0; k < 10; k++, p++)
        printf("%3d ", *p);
    printf("\n");
}
