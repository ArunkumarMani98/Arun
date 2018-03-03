#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int j,i,e=0;
clrscr();
printf("\nEnter the string : ");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
printf("\nYES!!!");
e=1;
break;
}
}
}
if(e==0)
{
printf("\nNO!!!");
}
getch();
}
