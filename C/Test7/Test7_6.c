#include <stdio.h>
#include <string.h>
char *strcreat(char q1[],char *q2)
{
    char *p;
    for (p=q1;*p!='\0';)
        p++;
    while(*q2!='\0')
        *(p++)=*(q2++);
    *p='\0';
    return(q1);
}
void main ()
{
    char str1[80]="I have a computer.";
    char str2[]="I learn C lauguage.",*pt;
    pt=strcreat(str1,str2);
    printf("The new string is:%s\n",pt);
}
