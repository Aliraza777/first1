#include<stdio.h>
int main()
{
  int a,b,c,x1,x2,y1,y2,x3,y3;
  printf("give x1\n");
  scanf("%d",&x1 );
  printf("give y1\n");
  scanf("%d",&y1);
  printf("give x2\n");
  scanf("%d",&x2);
  printf("give y2\n");
  scanf("%d",&y2);
  printf("give x3\n");
  scanf("%d",&x3);
  printf("give y3\n");
  scanf("%d",&y3);
  a=(x2-x1)/(y2-y1);
  b=(x3-x2)/(y3-y2);
  c=(x1-x3)/(y1-y3);
  if((a*b)+(b*c)==(a*c))
  {
    printf("points fall on same line\n");
  }
  else
  printf("points dont lie on same line\n");
  return 0;
}
