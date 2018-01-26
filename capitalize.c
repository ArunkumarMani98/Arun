#include<stdio.h>
#include<string.h>
int main(void)
{
char n[100];
int i,a;
printf("\nEnter the string : ");
scanf("%[^\n]%*s",&n);
a=strlen(n);
for(i=0;i<a;i++)
{
	if(n[i]==' ')
	{
		n[i+1]-=32;
	}
}
n[0]-=32;
printf("\nThe capitalized character is %s.",n);
return 0;
	
}
