#include <stdio.h>

void main() {
    int k;
    for (k = 1; k < 5; k++)
        switch (k) {
            case 1:
            case 2:
                printf("%-2d", k);
            case 3:
                printf("%-2d", k);
                break;
            default:
                printf("OK!\n");
        }
    printf("\n");
}
