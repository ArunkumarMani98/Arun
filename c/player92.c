#include<stdio.h>
void main()
{
    int num,bin,deci=0,base=1,rem;
    scanf("%d",&num); 
    while(num>0)
    {
        rem=num%10;
        deci=deci+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("%d", deci);
}
