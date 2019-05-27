#include<stdio.h>
int main()
{
  int b,f,p,s,n,a;
  char q;
printf("b=burger\n");
printf("f=fries\n");
printf("p=pizza\n");
printf("s=sandwiches\n");
printf("Enter your order\n");
scanf(" %c",&q);

printf("how much amount you want\n");
scanf("%d",&n);

switch(q)
{
  case 'b':
  a=200*n;
  printf("your bill is %d\n",a);
  break;

  case 'f':
    a=50*n;
  printf("your bill is %d\n",a);
  break;

  case 'p':
  a=500*n;
  printf("your bill is %d\n",a);
  break;

  case 's':
  a=150*n;
  printf("your bill is %d\n",a);
  break;

  default:
  printf("invalid entry\n");
}
  return 0;
}
