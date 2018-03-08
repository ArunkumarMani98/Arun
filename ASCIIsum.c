#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n=0;
clrscr();
printf("\nEnter the string : ");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
n+=(int)a[i];
}
printf("\nThe ASCII sum is %d .",n);
getch();
}
