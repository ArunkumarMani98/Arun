#include <stdio.h>
#include<ctype.h>
int main(void)
{
	char a[100];
	int i,n,c=0;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isdigit(a[i]))
		{
			c=c+1;
		}
	}
	if(c==n)
	{
		printf("\nThe given string %s is Numeric",a);
	}
	else
	{
		printf("\nThe given string %s is Non-Numeric",a);
	}
	return 0;
}
