#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,s,k;
char a[100],b[100];
clrscr();
printf("\nEnter the string : ");
scanf("%s",&a);
printf("\nEnter the number of rotatios : ");
scanf("%d",&n);
k=strlen(a);
s=n%k;
printf("\nThe reversed string is : ");
for(i=s;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
for(i=0;i<s;i++)
{
printf("%c",a[i]);
}
getch();
}
