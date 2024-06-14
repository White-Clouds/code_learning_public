#include <stdio.h>

int fun(int x) {
    int p;
    if (x == 0 || x == 1)
        return (3);
    else
        p = x - fun(x - 2);
    return (p);
}

void main() {
    printf("%d\n", fun(9));
}
