#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],t;
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
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nThe elements less than %d in array is : ",n);
for(i=0;i<n;i++)
{
if(a[i]<n)
{
printf("\n%d",a[i]);
}
}
getch();
}
