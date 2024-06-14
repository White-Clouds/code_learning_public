#include <stdio.h>

void main() {
    int i = 6, m = 0;
    do {
        m = m + 1;
        switch (i % 4) {
            case 0:
                i = i - 7;
                break;
            case 1:
            case 2:
            case 3:
                i = i + 1;
                break;
        }
    } while (i >= 0);
    printf("m=%d\n", m);
}
