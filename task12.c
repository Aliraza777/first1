#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter a number\n");
scanf("%d",&a);
if(a<0)
{
  b=1;
}
if(a>0)
{
  b=2;
}
if(a==0)
{
  b=0;
}
switch(b)
{
  case 1:
  printf("its negative\n");
  break;
  case 2:
  printf("its positive\n");
  break;
  case 0:
  printf("its zero\n");
  break;
  default:
  printf("invalid input\n");
  break;
}
return 0;
}
