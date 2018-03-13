#include<stdio.h>
void main()
{
	int n,k;
	float c;
	scanf("%d",&n);
	scanf("\t%d",&k);
	c=n>>k;
	printf("\n%.2f",c);
}
