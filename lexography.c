#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char a[100];
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe lexographed string is %s.",a);
  return 0;
}
