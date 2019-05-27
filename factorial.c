#include<stdio.h>
int main()
{
  int n,c,r,a,b,d,e,z;
  printf("Enter n\n");
  scanf("%d",&n);
  printf("Enter r\n");
  scanf("%d",&r);
  a=n;
  b=1;
while(a>0)
{
  b=b*a;
  a--;
}
c=n-r;
d=1;
while(c>0)
{
  d=d*c;
  c--;
}
e=1;
while(r>0)
{
  e=e*r;
  r--;

}
z=b/(d*e);
printf("nCr=%d\n",z);

return 0;
}
