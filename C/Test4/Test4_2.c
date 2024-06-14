#include <stdio.h>

void main() {
    char ch;
    printf("input string:");
    ch = getchar();
    while (ch != '?') {
        putchar(ch);
        ch = getchar();
    }
    putchar('\n');
}
