#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],e=0;
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
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
e=e+1;
}
}
}
printf("\n%d times a[i]<a[j].",e);
getch();
}
