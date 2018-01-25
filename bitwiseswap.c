#include <stdio.h>

int main(void)
{
	int n,m;
	printf("\nEnter the first number: ");
	scanf("%d",&m);
	printf("\nEnter the second number: ");
	scanf("%d",&n);
	m^=n;
	n^=m;
	m^=n;
	printf("\nAfter swapping:");
	printf("\nThe first number is %d.",m);
	printf("\nThe second number is %d.",n);
	return 0;
}
