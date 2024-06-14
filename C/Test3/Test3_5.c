#include <stdio.h>

void main() {
    int a, b, n = 0;
    printf("input a,b:");
    scanf("%d,%d", &a, &b);
    switch (a % 3) {
        case 0:
            n++;
            break;
        case 1:
            n++;
            switch (b % 2) {
                default:
                    n++;
                case 0:
                    n++;
                    break;
            }
    }
    printf("n=%d\n", n);
}
