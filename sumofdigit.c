#include <stdio.h>

int main(void)
{
	int n,temp,i,j,a[100],sum=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		temp=n%10;
		a[i]=temp;
		n=n/10;
		i++;
	}
	printf("\nThe sum is : ");
	for(j=i-1;j>=0;j--)
	{
		sum=sum+a[j];
	}
	printf("%d",sum);
	return 0;
}
