#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,k,a[100];
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the K value : ");
scanf("%d",&k);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(k<n)
{
printf("\nAfter removing last %d elements from array is : ",k);
for(i=0;i<n-k;i++)
{
printf("\n%d",a[i]);
}
}
else
{
printf("\nEnter K value less than N value .");
}
getch();
}
