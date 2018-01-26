#include <stdio.h>

int main(void)
{
	int a,b,temp;
	printf("\nEnter the first number: ");
	scanf("%d",&a);
	printf("\nEnter the second number: ");
	scanf("%d",&b);
	printf("\nBefore swapping a is %d and b is %d.",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping: ");
	printf("\nThe first number a is %d.",a);
	printf("\nThe second number b is %d.",b);
	return 0;
}
