#include <stdio.h>
#include <string.h>

#define NUM 7

void main() {
    char name[10];
    int k, yes = 0;
    char list[NUM][10] = {"Zhang", "Li", "Wang", "Ling", "Huang", "Liu", "Tan"};
    printf("input your name:");
    gets(name);
    for (k = 0; k < NUM; k++)
        if (strcmp(list[k], name) == 0)
            yes = 1;
    if (yes)
        printf("%s is in our class.\n", name);
    else
        printf("%s is not in our class.\n", name);
}
