#include <stdio.h>

struct student {
    int num;
    char name[20];
    float score;
} stu[5] = {{2001, "Li ping", 45},
            {2002, "Zhang ping", 62.5},
            {2003, "He fang", 92.5},
            {2004, "Chengling", 87},
            {2005, "Wang ming", 58}};

void main() {
    int i, number, flag = 0;
    printf("input search number:");
    scanf("%d", &number);
    for (i = 0; i < 5; i++)
        if (number == stu[i].num) {
            flag = 1;
            break;
        }
    if (flag)
        printf("%d%12s%8.2f\n", stu[i].num, stu[i].name, stu[i].score);
    else
        printf("Not found.\n");
}
