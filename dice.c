#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(NULL));
  int n=1,a=0,c=0;

  for(n=1;n<=6;n++)
  {
    n=rand()%6+1;
  if(n!=5)
  {
    a=a+n;
c=c+1;
  }
}
printf("total score %d\n",a);
printf("total balls %d\n",c);
  return 0;
}
