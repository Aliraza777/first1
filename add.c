#include<stdio.h>
int main()
{
int x,y,z;
for(x=501;x<3000;x++)
{
if(((x%3==0) || (x%5==0))&&!((x%3==0)&&(x%5==0)))
{
y=y+x;
}
}
printf("%d",y);
return 0;
}
