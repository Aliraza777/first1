#include<stdio.h>
int main()
{
  int a;
  int min=10000000;
  int max=0;
  printf("Enter any number\n");
  scanf("%d",&a);
while(a!=-1)
{
  if(a>max)
  {max=a;
    printf("maximum no. is %d\n",max);
  }
  else
  {
    printf("maximum no. is %d\n",max);
  }
  if(a<min)
  {min=a;
    printf("minmum no. is %d\n",min);
  }
  else
  {
    printf("minimum no. is %d\n",min);
  }
  printf("enter other no.\n");
  scanf("%d",&a);
}
return 0;
}
