#include <stdio.h>

void main() {
    float x, y;
    printf("please enter x:");
    scanf("%f", &x);
    if (x < 0 && x != -3)
        y = x * x + x - 6;
    else if (x > 0 && x < 10 && x != 2 && x != 3)
        x = x * x + 5 * x + 6;
    else
        y = x * x - x - 1;
    printf("\nx=%f,y=%f\n", x, y);
}
