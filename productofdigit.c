#include <stdio.h>
 
int main(void)
{
	int n,a[100],i=0,j,temp,p=1,b;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		temp=n%10;
		a[i]=temp;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	{
		p=p*a[j];
	}
	printf("\nThe product of the digits in %d is %d. ",b,p);
	return 0;
}
