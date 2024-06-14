#include <stdio.h>
#include <math.h>

void main() {
    double a[10], min;
    int i;
    for (i = 0; i <= 10; i++)
        a[i - 1] = i * i - i - sqrt(i);
    min = a[0];
    for (i = 1; i < 10; i++)
        if (min > a[i])
            min = a[i];
    printf("%f\n", min);
}
