#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number\n");
scanf("%d",&a);
printf("Enter second number\n");
scanf("%d",&b);
printf("Enter third number\n");
scanf("%d",&c);
if((a<b)&&(b<c)||(a>b)&&(b>c))
{
printf("2nd highest is\n");
printf("%d\n",b);
}
if((c<a)&&(a<b)||(c>a)&&(a>b))
{
  printf("2nd highest is\n");
  printf("%d\n",a);
}
if((b<c)&&(c<a)||(b>c)&&(c>a))
{
  printf("2nd highest is\n");
  printf("%d\n",c);
}
return 0;
}
