#include <stdio.h>
#include<math.h>
int main(void)
{
	float p,q;
	printf("\nEnter the degree : ");
	scanf("%f",&q);
	p=sin(q);
	printf("\nThe value of sin(%.2f) is %.2f",q,p);
	return 0;
}
