#include<stdio.h>
int main()
{
  int a;
  int b=0;
  int c=0;
  printf("Enter any number\n");
  scanf("%d",&a);
  while(a!=-1)
  {
    if(a%2==0)
    {
      b=b+1;
    }
    else
    {
    c=c+1;
  }

  printf("Enter any other number\n");
  scanf("%d",&a);

}
printf("total even numbers are %d\n",b);
printf("total odd numbers are %d\n",c);
return 0;
}
