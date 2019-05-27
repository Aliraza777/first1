#include<stdio.h>
int main()
{
int da,ma,ya,db,mb,yb,a,b,c,d,e;
printf("enter your date of birth\n");
scanf("%d %d %d",&da,&ma,&ya);
printf("enter the current date\n");
scanf("%d %d %d",&db,&mb,&yb);
c=yb-ya;
b=12-ma;
b=b+mb;
a=30-da;
a=a+db;
if(a>=30)
{
d=a-30;
b=b+1;

if(c%4==0)
{
  d=d+1;

}
printf("your age is days=%d\n months=%d\n years=%d",d,b,c);
}
if(a<30)
{
  if(c%4==0)
{
  a=a+1;
  printf("your age is days=%d\n months=%d\n years=%d",a,b,c);

}
}
return(0);
}
