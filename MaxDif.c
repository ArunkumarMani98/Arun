#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],t;
clrscr();
printf("\nEnter the size of array : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nThe maximum difference is %d.",a[n-1]-a[0]);
getch();
}
