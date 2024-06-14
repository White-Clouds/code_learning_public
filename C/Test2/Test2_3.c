#include <stdio.h>

void main() {
    int a = 3, b = 4, c = 5;
    float x = 1.2, y = 2.4, z = -3.6;
    long u = 51274, n = 128765;
    char ch1 = 'a', ch2 = 'b';
    printf("a=%d   b=%d   c=%d\n", a, b, c);
    printf("x=%7.5f,y=%8.6f,z=%8.6f\n", x, y, z);
    printf("x+y=%5.2f  y+z=%5.2f  z+x=%5.2f\n", x + y, y + z, z + x);
    printf("ch1='%c'  or  %d(ASCII)\n", ch1, ch1);
    printf("ch2='%c'  or  %d(ASCII)\n", ch2, ch2);
}
