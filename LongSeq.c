#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],max=0,t[100];
clrscr();
printf("\nEnter the size of array : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<100;i++)
{
t[i]=0;
}
for(i=0;i<n;i++)
{
j=a[i];
t[j]+=1;
}
for(i=0;i<100;i++)
{
if(t[i]!=0)
{
if(t[i]>max)
{
max=t[i];
}
}
}
printf("\nThe maximum repeated times is %d.",max);
getch();
}
