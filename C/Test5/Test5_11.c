#include <stdio.h>
#include <string.h>


void main ()
{
	char a[10],b[10];
	int c,i=0,k;
	scanf("%s",a);
    printf("a=%s\n",a);
	c=strlen(a);
	for (k=0;k<c;k++)
	   if(a[k]%2!=0)
	b[i++]=a[k];
	b[i]='\0';
	printf("b=%s\n",b);
}
