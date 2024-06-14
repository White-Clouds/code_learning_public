#include <stdio.h>

void main() {
    int x, y;
    for (x = 1; x <= 9; x++)
        for (y = 1; y <= 9; y++)
            if (10 * x + y + y * 10 + x == 154 & x != y)
                printf("%d%d+%d%d=154\n", x, y, y, x);
}
