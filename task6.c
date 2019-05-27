#include<stdio.h>
int main()
{
  int a,b;
  int c=0;
  printf("Enter a number\n");
  scanf("%d",&a);
  for(b=a;b>0;b--)
  {
    c=b+c;

  }
  printf("%d\n",c);
  return 0;
}
