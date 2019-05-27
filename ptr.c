#include<stdio.h>
void add (int *ptr,int *ptr1,int *ptr2)
{
*ptr2=*ptr+*ptr1;

}
int main()
{
  int a,b,c;
  printf("enter a number\n");
  scanf("%d",&a);
  printf("enter another number\n");
  scanf("%d",&b);
  add(&a,&b,&c);
  printf("addition of these are\n %d\n",c);
  return 0;
}
