#include <stdio.h>

int main(void)
{
	int n;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n%d is the nearest even number.",n);
	}
	else
	{
		printf("\n%d is the nearest even number.",n-1);
	}
	return 0;
}
