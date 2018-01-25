#include <stdio.h>

int main(void)
{
	int n,m,temp;
	printf("\nEnter the first number: ");
	scanf("%d",&m);
	printf("\nEnter the second number: ");
	scanf("%d",&n);
	temp=n;
	n=m;
	m=temp;
	printf("\nAfter swapping:");
	printf("\nThe first number is %d.",m);
	printf("\nThe second number is %d.",n);
	return 0;
}
