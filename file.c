#include <stdio.h>
int main ()
{
 int a,b,c,d,e,f,g;
 printf("Enter any digit no.\n");
 scanf("%d",&a);
 b=a/1000;
 c=(a%1000)/1000;
 d=c%100;
 e=d/10;
 f=e%10;
 g=a+c+e+f;
 printf("%d\n",g);
 return 0;
 }
