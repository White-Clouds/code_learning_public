#include <stdio.h>

void main() {
    int i = 1, sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("s1=%d\n", sum);
}
