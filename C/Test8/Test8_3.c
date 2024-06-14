#include <stdio.h>

#define N 8
typedef struct ss {
    char num[5];
    float s;
} STREC;

float fun(STREC a[], STREC b[], int *n) {
    int i, k = 0;
    float average, sum = 0.0;
    for (i = 0; i < N; i++)
        sum += a[i].s;
    average = sum / N;
    for (i = 0; i < N; i++)
        if (a[i].s < average) {
            b[k] = a[i];
            k++;
        }
    *n = k;
    return (average);
}

void main() {
    STREC s[N] = {{"GA05", 85},
                  {"GA03", 69},
                  {"GA04", 81},
                  {"GA01", 91},
                  {"GA07", 72},
                  {"GA02", 76},
                  {"GA08", 64},
                  {"GA06", 87}};
    STREC h[N], t;
    int i, n;
    float ave;
    ave = fun(s, h, &n);
    printf("The %d student's score which is lower than %6.2f\n", n, ave);
    for (i = 0; i < n; i++)
        printf("%s\t%5.1f\n", h[i].num, h[i].s);
}
