#include<stdio.h>
int main ()
{
int a,b,c,d,e,f,g,h,i,j,k;
printf("Enter a number\n");
scanf("%d",&a);
if (a>5000)
{
  b=a/5000;
  printf("%d notes of five thousand\n",b);
  }

c=a%5000;
d=c/1000;
printf("%d notes of one thousand\n",d);
e=a%1000;
f=e/100;
printf("%d notes of one hundred\n",f);
g=a%100;
h=g/10;
printf("%d notes of ten\n",h);
i=a%10;
j=i/5;
printf("%d coins of five\n",j);
k=a%5;
printf("%d coins of 1\n",k);
return 0;
}
