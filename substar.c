#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int n,m;
	printf("\nEnter the string: ");
	scanf("%s",&a);
	m=strlen(a);
	if(m%2==0)
	{
		n=m/2;
		a[n]='*';
		a[n-1]='*';
	}
	else
	{
		n=m/2;
		a[n]='*';
	}
	printf("\nThe modulated string is %s.",a);
	return 0;
}
