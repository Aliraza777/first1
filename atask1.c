#include <stdio.h>
int main()
{
char alp[10];
char a;
int b;
for(b=0;b<10;b++)
{
printf("enter any upper or lower alphabet\n");
scanf(" %c",&alp[b]);
}

for(int b=0;b<10;b++)
{
  if(alp[b]>96&&alp[b]<123)
  {
  a=alp[b]-32;
  }
  else
  {
    a=alp[b]+32;
  }
  printf("%c\n",a);
}
return 0;
}
