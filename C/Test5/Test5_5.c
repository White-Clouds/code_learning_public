#include <stdio.h>

#define M 10

void main() {
    int score[M], b[M], i, j, k;
    float aver, sum = 0.0;
    printf("input score(10)\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &score[i]);
    for (i = 0; i < 10; i++)
        sum = sum + score[i];
    aver = sum / M;
    printf("aver=%f", aver);
    i = 0;
    j = 0;
    for (; i < 10;) {
        if (score[i] > aver)
            b[j++] = score[i];
        i++;
    }
    printf("\nthe numbers of exceeded the average score: %d\n", j);
    for (k = 0; k < j; k++)
        printf("%4d", b[k]);
    printf("\n");
}
