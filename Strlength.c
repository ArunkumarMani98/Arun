#include<stdio.h>
void main()
{
	char a[100];
	int i,n=0;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		n=n+1;
	}
	printf("\nThe length of %s is %d .",a,n);
}
