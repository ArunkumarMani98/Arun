#include<stdio.h>
void main()
{
int a,b,c;
Printf("\nEnter the three value of a:");
scanf("%d",&a);
printf("\nEnter the value of b:);
scanf("%d",&b);
printf("\nEnter the value of c:");
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf("\n%d is largest",a);
}
else if((b>a)&&(b>c))
{
printf("\n%d is largest",b);
}
else
{
printf("\n%d is largest",c);
}
}
