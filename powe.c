#include <stdio.h>
#include<math.h>
int main(void)
{
	int n,m,a;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the power : ");
	scanf("%d",&m);
	a=pow(n,m);
	printf("\nThe result is %d .",a);
	return 0;
}
