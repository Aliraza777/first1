#include<stdio.h>
int main ()
{
char n;
printf("Enter any alphabet\n");
scanf(" %c",&n);
n=n-32;
printf("alphabet is %c\n",n);
return 0;
}
