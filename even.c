#include<stdio.h>
int main()
{
int a,b;
int c=0,d=0;
printf("Enter a number\n");
scanf("%d",&a);
a=b;
while(b>-1)
{
if(b%2==0)
{
  c=c+1;
}
else
{
d=d+1;
}
printf("Enter other number\n");
scanf("%d",&b);
}
printf("even numbers are \n");
printf("%d\n",c);
printf("odd numbers are\n");
printf(" %d\n",d);
return 0;
}
