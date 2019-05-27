#include <stdio.h>
int main ()
{
int a,b;
printf ("Enter the tested number\n");
scanf("%d",&a);
if ((a==2) || (a==3) || (a==5) || (a==7))
{
printf(" is a prime number\n");

if ((a%2 != 0) || (a%3 != 0) || (a%5 != 0) || (a%7 != 0))

  printf(" is not prime\n");

else
printf(" is a prime number\n");

}
return 0;
}
