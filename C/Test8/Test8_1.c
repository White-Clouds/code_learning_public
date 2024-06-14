#include <stdio.h>

struct st {
    int x;
    int *y;
} *p;
int dt[4] = {10, 20, 30, 40};
struct st aa[4] = {50, &dt[0], 60, &dt[0], 60, &dt[0], 60, &dt[0]};

void main() {
    p = aa;
    printf("%d", ++p->x);
    printf("%4d", (++p)->x);
    printf("%3d\n", ++(*p->y));
}
