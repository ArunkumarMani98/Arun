#include <stdio.h>
int main(void) 
{
	int n;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if(n>=-32768&&n<=32768)
	{
		printf("\nINTEGER.");
	}
	else
	{
		printf("\nLONG LONG.");
	}
	return 0;
}
