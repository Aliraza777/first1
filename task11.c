#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a number\n");
  scanf("%d",&a);
  b=a%2;
  switch(b)
  {
    case 0:
    printf("its an even number\n");
    break;
    default:
    printf("its an odd number\n");
    break;
  }
  return 0;
}
