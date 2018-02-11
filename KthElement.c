#include <stdio.h>
int main(void) 
{
	int n,temp,s,c=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the number to be checked : ");
	scanf("%d",&s);
	while(n!=0)
	{
		temp=n%10;
		if(temp==s)
		{
			c=c+1;
		}
		n=n/10;
	}
	printf("\nThere are %d times the number present .",c);
	return 0;
}
