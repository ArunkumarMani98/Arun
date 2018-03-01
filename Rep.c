#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],k[100];
	int i,c=0;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	printf("\nEnter the character  : ");
	scanf("%s",&k);
	for(i=0;a[i]!='\0';i++)
	{
		if(k[0]==a[i])
		{
			c=c+1;
		}
	}
	printf("\n%d times %c is repeating .",c,k[0]);
}
