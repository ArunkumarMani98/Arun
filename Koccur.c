#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],k[100];
	int i;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	printf("\nEnter the character  : ");
	scanf("%s",&k);
	for(i=0;a[i]!='\0';i++)
	{
		if(k[0]==a[i])
		{
			printf("The first occurence of %c is %d .",k[0],i+1);
			break;
		}
	}
}
