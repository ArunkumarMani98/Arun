#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,j;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe maximum element is : ");
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
printf("\n%d",a[i]);
break;
}
}
getch();
}
