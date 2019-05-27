#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a number\n");
  scanf("%d",&a);
  b=a/365;
  printf("number of years are %d\n",b);
b=a/12;
printf("number of months are %d\n",b);
b=a/4;
printf("number of weeks are %d\n",b);
printf("number of days arre %d\n",a);

  return 0;
}
