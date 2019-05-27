#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("Enter any number\n");
  scanf("%d",&a);
b=a;
c=1;
for(d=1;d<=a;a--)
  {
    for(e=b;e>=a;e--)
{
  printf(" %d ",c);
  c=c+1;

}
printf("\n");
  }
  return 0;
}
