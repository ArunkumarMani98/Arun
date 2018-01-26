#include <stdio.h>
#include<math.h>
int main(void)
{
	float f,t;
	printf("\nEnter the floating number with one decimal ponit.");
	scanf("%f",&f);
	t=ceil(f);
	printf("\nAfter rounding of the number is %.0f.",t);
	return 0;
}
