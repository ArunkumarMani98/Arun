#include <stdio.h>

int main(void)
{
	int p,t,r,si;
	printf("\nEnter the principle amount : ");
	scanf("%d",&p);
	printf("\nEnter the no.of.years : ");
	scanf("%d",&t);
	printf("\nEnter the rate of interset : ");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("\nThe simple interest is %d.",si);
	return 0;
}
