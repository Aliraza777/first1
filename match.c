#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(NULL));
  int n=1,a=0,c=0,b,d=1,k;
  printf("enter your guess\n");
  scanf("%d",&b);
    n=rand()%6+1;
      a=rand()%6+1;
  c=a+n;
  while(k!=0)
  {
  if(b!=c)

{  printf("try again\n");
  d++;
printf("Enter another value\n");
scanf("%d",&b);}
else
{
  k=0;
  printf("your guess is right\n" );
}
}
printf("your num of turns %d\n",d );
return 0;
}
