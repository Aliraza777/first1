#include<stdio.h>
int main ()
{
   int a,b,c,d,e,f,g,h;
   printf("Enter four digits\n");
   scanf("%d",&a);
   b=a/1000;
   c=a%1000;
   d=c/100;
   e=c%100;
   f=e/10;
   g=e%10;
   h=b+d+f+g;
   printf("sum of them is %d\n",h);
   return 0;

}
