#include<stdio.h>
#include<string.h>
void main()
{
	int a,b,c,d;
	printf("\nEnter the angles of the triangle : ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	d=a+b+c;
	if(d==180)
	{
		printf("\nThey are interior angles of the triangle.");
	}
	else
	{
		printf("\nThey are not interior angles of the triangle.");
	}
}
