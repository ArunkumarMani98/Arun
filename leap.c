#include<stdio.h>
void main()
{
int y;
printf("\nenter the year");
scanf("%d",&y);
if(y%4==0)
{
printf("\n%d is leap year");
}
else
{
printf("\n%d is not a leap year");
}
}
