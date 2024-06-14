#include <stdio.h>

void main() {
    char ch;
    printf("input a characer:");
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    printf("%c\n", ch);
}
