#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(NULL));
int a,ball=0,score=0,b=0;


while(a!=5)
{  a=rand()%6+1;
    ball=ball+1;
  if(a!=5)
  {
    score=a+score;
}
}

  printf("score %d\t,balls%d\n",score,ball);
  return 0;
 }
