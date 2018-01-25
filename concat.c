#include <stdio.h>
#include<string.h>
int main(void) 
{
	int i,j;
	char a[100],b[100];
	printf("\nEnter the first string : ");
	scanf("%s",&a);
	printf("\nEnter the second string : ");
	scanf("%s",&b);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	j=0;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	a[i]=='\0';
	printf("\nThe concatenated string is %s.",a);
	return 0;
}
