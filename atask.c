#include<stdio.h>
int main()
{
  char num[10];
  char b;
  int a;
  for(a=0;a<10;a++)
  {
    printf("enter any alphabet\n");
    scanf(" %c", &num[a]);
  }

  for(a=0;a<3;a++)
  {
      b=num[a]-32;
    printf( "%c\n",b);

  }
  return 0;
}
