#include<stdio.h>
int main()
{
  int num,i=0,x,d;
  char *str[2000];
  printf ("Enter an integer value: \n");
  scanf ("%d",&num);
  while(num!=0)
  {
    d=num %10;
    num=num /10;
    switch(d)
    {
      case 0:str[i++] = "zero";
      break;
      case 1:str[i++] = "one"; 
      break;
      case 2:str[i++] = "two"; 
      break;
      case 3:str[i++] = "three"; 
      break;
      case 4:str[i++] = "four"; 
      break;
      case 5:str[i++] = "five"; 
      break;
      case 6:str[i++] = "six"; 
      break;
      case 7:str[i++] = "seven"; 
      break;
      case 8:str[i++] = "eight"; 
      break;
      case 9:str[i++] = "nine"; 
      break;
    }
  }
  for(x=i-1; x>=0; x--){
  printf ("%s ",str[x]);
  }
  return 0;
}
