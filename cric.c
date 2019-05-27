#include<stdio.h>
int main ()
{
  int array[10];
  int a=0,i=0;
  printf("give index value 0-9\n");
  scanf("%d,&i");
  printf("give any number\n");
  scanf("%d,&array");
  for(a=0;a<i;a++)
  {
    if(i==0)
    {
      array[a]=array[a+1];

    }
    printf("%d",array);
  }
  return 0;
}
