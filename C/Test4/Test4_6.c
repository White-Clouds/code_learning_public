#include <stdio.h>

void main() {
    int k;
    float max, min, x, sum, ave;
    printf("please enter score of student:\n");
    scanf("%f", &x);
    max = min = sum = x;
    for (k = 1; k < 10; k++) {
        scanf("%f", &x);
        sum += x;
        if (max < x)
            max = x;
        if (min > x)
            min = x;
    }
    ave = sum / 10;
    printf("average=%6.2f\nmax=%6.2f\nmin=%6.2f\n", ave, max, min);
}
