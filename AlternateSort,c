#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],j,m;
clrscr();
printf("\nEnter the number of elements of array : ");
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
m=a[i];
a[i]=a[j];
a[j]=m;
}
}
}
printf("\nThe new sorted approach is : ");
for(i=0,j=n-1;i<n/2;i++,j--)
{
printf("%d %d ",a[j],a[i]);
}
if(n%2==1)
{
printf("%d",a[n/2]);
}
getch();
}

