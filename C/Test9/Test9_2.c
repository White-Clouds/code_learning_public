#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    char ch;
    if ((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open %s\n", argv[1]);
        getch();
        exit(0);
    }
    if ((fp2 = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open %s\n", argv[1]);
        getch();
        exit(0);
    }
    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);
    fclose(fp1);
    fclose(fp2);
}
