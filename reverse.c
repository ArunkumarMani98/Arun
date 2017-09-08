#inlcude<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
printf("Enter a string");
scanf("%s",&s1);
s2=strrev(s1);
printf("Rversed string is:%s",s2);
}
