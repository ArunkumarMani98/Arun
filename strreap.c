#include <stdio.h>

int main(void)
{
    char a[100];
    int n,i;
    printf("\nEnter the string: ");
    scanf("%s",&a);
    printf("\nEneter the number of times the string printed: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n%s\n",a);
    }
	return 0;
}
