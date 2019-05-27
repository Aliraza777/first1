#include<stdio.h>
int main()
{
  int no,rem,count=0,a;
  printf("Enter any number\n");
  scanf("%d",&no);
  while(no!=0)
  {
    rem=no%10;
    no=no/10;
    count++;
  }
  a=count%2;
  switch (a)
  {
    case 0:
    printf("its even\n");
    break;
    default:
    printf("its odd\n");
    break;
  }
  return 0;
}
