#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=1;
clrscr();
printf("\nEnter the range : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f*=i;
}
printf("\nThe factorial of %d is %d.",n,f);
getch();
}
