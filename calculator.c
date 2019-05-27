#include<stdio.h>
int main()
{
int a,b,c;
char d;
printf("Enter first integer\n");
scanf("%d",&a);
printf("Enter operation\n");
scanf(" %c",&d);
printf("Enter second integer\n");
scanf("%d",&b);
if(d=='+')
{
  c=a+b;
  printf("your answer is\n");
  printf("%d\n",c);
}
if(d=='-')
{
  c=a-b;
  printf("your answer is\n");
  printf("%d\n",c);
}
if(d=='*')
{
  c=a*b;
    printf("your answer is\n");
  printf("%d\n",c);
}
if(d=='/')
{
  c=a/b;
    printf("your answer is\n");
  printf("%d\n",c);
}
if(d=='%')
{
  c=a%b;
    printf("your answer is\n");
  printf("%d\n",c);
}
return 0;
}
