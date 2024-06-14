#include <stdio.h>
#include <string.h>

void main() {
    char ch, a[10], b[10];
    int c, d, k;
    scanf("%s", a);
    scanf("%s", b);
    printf("a=%s,b=%s\n", a, b);
    c = strlen(a);
    d = strlen(b);
    if (c > d)
        for (k = 0; k < c; k++) {
            ch = a[k];
            a[k] = b[k];
            b[k] = ch;
        }
    b[c] = '\0';
    printf("a=%s\n", a);
    printf("b=%s\n", b);
}
