#include<stdio.h>
int main()
{
  int a,f=0,v,u,l;
  int b,c=0,g,z=0,z1=0;
  printf("Enter your item no.\n");
  scanf("%d",&a);
  printf("Enter quantity\n");
  scanf("%d",&b);
  if(a=1)
  {
    c=b*20;
    printf("your bill is %d\n",c);
  }
  if(a==2)
  {
    c=b*20;
    printf("your bill is %d\n",c);
  }
  if(a==3)
  {
    c=b*15;
  printf("your bill is %d\n",c);
  }
  if(a==4)
  {
    c=b*20;
    printf("your bill is %d\n",c);
  }
  if(a==5)
  {
    c=b*15;
    printf("your bill is %d\n",c);
  }
  if(a==6)
  {
    c=b*25;
    printf("your bill is %d\n",c);
  }
  if(a==7)
{
    c=b*20;
    printf("your bill is %d\n",c);
}
printf("if you want to enter another order press 1 or 0 to exit\n");
scanf("%d",&v);

if(v==1)
{
  int d;
  int e;
  printf("Enter your item no.\n");
  scanf("%d",&d);
  printf("Enter quantity\n");
  scanf("%d",&e);
  if(d=1)
  {
    f=e*20;
    printf("your bill is %d\n",f);
  }
  if(d==2)
  {
    f=e*20;
    printf("your bill is %d\n",f);
  }
  if(d==3)
  {
    f=e*15;
  printf("your bill is %d\n",f);
  }
  if(d==4)
  {
    f=e*20;
    printf("your bill is %d\n",f);
  }
  if(d==5)
  {
    f=e*15;
    printf("your bill is %d\n",f);
  }
  if(d==6)
  {
    f=e*25;
    printf("your bill is %d\n",f);
  }
  if(d==7)
{
    f=e*20;
    printf("your bill is %d\n",f);
}
g=f+c+z+z1;
printf("your total bill is %d\n",g);
printf("press 1 if you want further order or press 0 to exit\n");
scanf("%d",&u);
if(u==1)
{
  int x;
  int y;
  printf("Enter your item no.\n");
  scanf("%d",&x);
  printf("Enter quantity\n");
  scanf("%d",&y);
  if(x=1)
  {
    z=y*20;
    printf("your bill is %d\n",z);
  }
  if(x==2)
  {
    z=y*20;
    printf("your bill is %d\n",z);
  }
  if(x==3)
  {
    z=y*15;
  printf("your bill is %d\n",z);
  }
  if(x==4)
  {
    z=y*20;
    printf("your bill is %d\n",z);
  }
  if(x==5)
  {
    z=y*15;
    printf("your bill is %d\n",z);
  }
  if(x==6)
  {
    z=y*25;
    printf("your bill is %d\n",z);
  }
  if(x==7)
{
    z=y*20;
    printf("your bill is %d\n",z);
}
g=f+c+z+z1;
printf("your total bill is %d\n",g);
printf("press 1 if you want further order or press 0 to exit\n");
scanf("%d",&l);
if(l==1)
{
int x1;
int y1;
printf("Enter your item no.\n");
scanf("%d",&x1);
printf("Enter quantity\n");
scanf("%d",&y1);
if(x1=1)
{
  z1=y1*20;
  printf("your bill is %d\n",z1);
}
if(x1==2)
{
  z1=y1*20;
  printf("your bill is %d\n",z1);
}
if(x1==3)
{
  z1=y1*15;
printf("your bill is %d\n",z1);
}
if(x1==4)
{
  z1=y1*20;
  printf("your bill is %d\n",z1);
}
if(x1==5)
{
  z1=y1*15;
  printf("your bill is %d\n",z1);
}
if(x1==6)
{
  z1=y1*25;
  printf("your bill is %d\n",z1);
}
if(x1==7)
{
  z1=y1*20;
  printf("your bill is %d\n",z1);
}
}
}
}
g=f+c+z+z1;
printf("your total bill is %d\n",g);
  return 0;
}
