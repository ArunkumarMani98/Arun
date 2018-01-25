#include <stdio.h>
#include<string.h>
int main(void) 
{
	int la,lb,max,a1,i,j,count=0;
	char a[100],b[100];
	printf("\nEnter the first string: ");
	scanf("%s",&a);
	printf("\nEnter the second string: ");
	scanf("%s",&b);
	la=strlen(a);
	lb=strlen(b);
	if(la>lb)
	{
		max=la;
	}
	else
	{
		max=lb;
	}
	for(i=0;i<max;i++)
	{
		if(a[i]==a[j])
		{
		}
		else
		{
			a1=(a[i]-a[j]);
			count++;
		}
	}
	if(count==0)
	{
		printf("\nTwo strings are equal.");
	}
	else
	{
		if(a1<0)
		{
			printf("\n%s is less than %s",a,b);
		}
		else
		{
			printf("\n%s is greater than %s",a,b);
		}
	}
	return 0;
}
