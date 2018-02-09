#include <stdio.h>
#include<ctype.h>
int main(void) 
{
	char a[100],b[100];
	int i,t[100];
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		t[i]=((int)a[i])+3;
		printf("%c",t[i]);
	}
	return 0;
}
