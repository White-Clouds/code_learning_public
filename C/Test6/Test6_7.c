#include <stdio.h>
#include <math.h>

#define S(r)  3.0*sqrt(3)*r*r/4
#define Q(r)  2.0*r*r

void main() {
    printf("%f\n", S(1));
    printf("%f\n", Q(1));
}
