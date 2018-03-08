#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],e=0,b[100],j,m;
clrscr();
printf("\nEnter the number of elements of first array : ");
scanf("%d",&n);
printf("\nEnter the first array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number of elements of second array : ");
scanf("%d",&m);
printf("\nEnter the second array elements : ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(b[j]==a[i])
{
e=e+1;
}
}
}
if(m==e)
{
printf("\nYes array B is subset of array A.");
}
else
{
printf("\nNO array B is not a subet of array A.");
}
getch();
}
