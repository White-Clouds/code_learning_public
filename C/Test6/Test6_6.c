#include <stdio.h>

#define PI 3.1415926
#define S(r) PI*r*r

float S1(int r) {
    return (PI * r * r);
}

void main() {
    printf("%f\n", S(2));
    printf("%f\n", S(1 + 1));
    printf("%f\n", S1(2));
    printf("%f\n", S1(1 + 1));
}
