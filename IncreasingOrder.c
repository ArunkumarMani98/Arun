#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],e=0,c=0,k;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
printf("\nThe number of elements in increasing order is %d.",i+1);
break;
}
}
getch();
}
