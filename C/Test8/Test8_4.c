#include <stdio.h>

#define MAX 3
struct regist {
    char name[6];
    char sex[2];
    char age[3];
    char address[30];
    char job[30];
    char postalcode[8];
    char phonenumber[12];
} person[MAX];

void main() {
    int i;
    for (i = 0; i < MAX; i++) {
        printf("NAME:");
        scanf("%s", person[i].name);
        printf("SEX:");
        scanf("%s", person[i].sex);
        printf("AGE:");
        scanf("%s", person[i].age);
        printf("ADDRESS:");
        scanf("%s", person[i].address);
        printf("JOB:");
        scanf("%s", person[i].job);
        printf("POSTALCODE:");
        scanf("%s", person[i].postalcode);
        printf("PHONENUMBER:");
        scanf("%s", person[i].phonenumber);
    }
    printf("Name    Sex   Age   Address   Job   Postalcode   Phonenumber   \n");
    for (i = 0; i < MAX; i++)
        printf("%-6s%-5s%-5s%-15s%-11s%-18s%-12s\n", person[i].name, person[i].sex, person[i].age, person[i].address,
               person[i].job, person[i].postalcode, person[i].phonenumber);
}
