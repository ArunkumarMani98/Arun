#include <stdio.h>

int main(void)
{
	int a,b;
	printf("\nEnter the first number: ");
	scanf("%d",&a);
	printf("\nEnter the second number: ");
	scanf("%d",&b);
	printf("\nBefore swapping a is %d and b is %d.",a,b);
	a^=b;
	b^=a;
	a^=b;
	printf("\nAfter swapping: ");
	printf("\nThe first number a is %d.",a);
	printf("\nThe second number b is %d.",b);
	return 0;
}
