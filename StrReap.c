#include<stdio.h>
#include<string.h>
int main()
{
char name[10];
int n,i;
printf("\nEnter the string");
scanf("%s",&name);
printf("\nEnter how many times it should be repeated");
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
printf("\n%s\n",name);
}
return 0;
}
