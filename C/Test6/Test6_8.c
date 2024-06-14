#include <stdio.h>

#define a(x) ((x)=(x>='A'&&x<='Z')?(x+32):(x))

void main() {
    char c;
    c = getchar();
    a(c);
    printf("%c\n", c);
}
