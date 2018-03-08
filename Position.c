#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],e=0;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
if((a[i]%2==0)&&(i%2==1))
{
printf("\t%d",a[i]);
e=1;
}
else if((a[i]%2==1)&&(i%2==0))
{
printf("\t%d",a[i]);
e=1;
}
}
if(e==0)
{
printf("\nNo elements Found!!!");
}
getch();
}
