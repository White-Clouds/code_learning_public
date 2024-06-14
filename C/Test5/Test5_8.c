#include <stdio.h>
#include <string.h>

void main() {
    char str[10], temp[10];
    int k;
    gets(temp);
    for (k = 1; k <= 4; k++) {
        gets(str);
        if (strcmp(temp, str) > 0)
            strcpy(temp, str);
    }
    printf("\nthe string is:%s\n", temp);
}
