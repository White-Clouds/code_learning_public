#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char ch;
    if ((fp = fopen("..\\Test9\\abc.txt", "rt")) == NULL) {
        printf("\ncan not open file strike any key exit!");
        getchar();
        exit(0);
    }
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    printf("\n");
}
