#include <stdio.h>
int fun(int);
int main(void)
{ 
    int n,c;
    scanf("%d",&n);
    c=fun(n);
    printf("%d",c);
	return 0;
}
int fun(int num)
{
    if(num%2==0)
    {
        num=num/2;
        return div(num);
    }
    else
    {
        return num;
    }
    
}
