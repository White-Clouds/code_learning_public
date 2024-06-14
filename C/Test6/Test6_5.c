#include <stdio.h>

#define NUM 10
float max, min;

float average(float x[], int n) {
    float sum;
    int k;
    max = min = sum = x[0];
    for (k = 1; k < n; k++) {
        sum = sum + x[k];
        if (x[k] > max)
            max = x[k];
        if (x[k] < min)
            min = x[k];
    }
    return (sum / n);
}

void main() {
    float cj[NUM], aver;
    int j;
    printf("input score of student:\n");
    for (j = 0; j < NUM; j++)
        scanf("%f", &cj[j]);
    aver = average(cj, NUM);
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", max, min, aver);
}
