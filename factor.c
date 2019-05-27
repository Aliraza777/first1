#include <stdio.h>
int main ()
{
int a,b;
printf("Enter any number\n");
scanf("%d",&a);
printf("Enter other number\n");
scanf("%d",&b);
if(a%b==0)
{
  printf("b is a factor of a\n");
}
if(b%a==0)
{
printf("a is a factor of b\n");
}
if((a%b!=0)&&(b%a!=0))
printf("none is the factor of other\n");

return 0;
}
