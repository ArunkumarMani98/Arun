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
for(i=0;i<n;i++)
{
if((a[i]>a[i+1])&&(i<n-1))
{
printf("\n%d",a[i]);
}
else if((a[i]<a[i+1])&&(i<n-1))
{
printf("\n%d",a[i+1]);
}
else if(a[i]==a[i+1])
{
printf("\n%d",a[i]);
}
}
getch();
}
