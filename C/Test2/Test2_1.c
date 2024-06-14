#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, v, s, l;
    printf("input a,b,c=");
    scanf("%f%f%f", &a, &b, &c);
    v = a * b * c;
    s = 2 * (a * b + a * c + b * c);
    l = sqrt(a * a + b * b + c * c);
    printf("v=%6.2f\ts=%6.2f\tl=%6.2f\n", v, s, l);
}
