#include <stdio.h>
#include<math.h>

int main(void) 
{
	int m,n,a;
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("\nEnter the power value");
	scanf("%d",&m);
	a=pow(n,m);
	printf("\nThe value is %d",a);
	return 0;
}
