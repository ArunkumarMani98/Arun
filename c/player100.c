#include<stdio.h>
void main()
{
	long int n,j=1,t,oct=0;
	printf("\nEnter the binary number : ");
	scanf("%ld",&n);
	while(n!=0)
	{
		t=n%10;
		oct=oct+t*j;
		j=j*2;
		n=n/10;
	}
	printf("\nThe Octal value is : %lX",oct);
}
