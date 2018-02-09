#include <stdio.h>
#define maxi 255
 
int main()
{
    char str[100];
    int freq[maxi];
    int i = 0, max,j,ascii;
    printf("Enter any string: ");
    gets(str);
    for(i=0;i<maxi;i++)
    {
        freq[i] = 0;
    }
    i=0;
    while(str[i]!='\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;
        i++;
    }
    max = 0;
    for(i=0;i<maxi;i++)
    {
        if(freq[i]>freq[max])
            max=i;
    }
    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
    return 0;
}
