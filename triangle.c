#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter any number\n");
  scanf("%d",&a);
b=a;
c=1;
for(int x=1;x<=a;a--)
  {
    for(int y=b;y>=a;y--)
{
  printf(" %d",c);
  c=c+1;

}
printf("\n");
  }
  return 0;
}
