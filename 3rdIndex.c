#include <stdio.h>

int main(void) 
{
	char a[100];
	int i;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	printf("\nThe initial and the 3rd character is : %c",a[0]);
	printf("%c",a[3]);
	return 0;
}
