#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d;
  printf("enter the testing number\n");
  scanf("%d",&a);
  while (a!=-1)
  {
b=sqrt(a);
  c=b*b;
  if(c==a)
  {
    printf("its a complete square\n");
  }
  else
  {printf("its not complete square\n");
}
printf("enter any other point\n");
scanf("%d",&a);
}
  return 0;
}
