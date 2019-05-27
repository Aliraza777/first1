#include<stdio.h>
int main()
{int a,b;
printf("press 1 for fasting and 0 for after meal\n");
scanf("%d",&a);
printf("Enter value\n");
scanf("%d",&b);
switch (a)
{
  case 1:
  if (b>70 && b<100)
  printf("normal\n");

    if(101<b && b<125)
{  printf("pre diabetic\n");
}
if(125<b)
printf("diabetic\n");

break;
  case 0:
  if(b<140)

    printf("normal\n");
  if(140<b && b<200)

    printf("pre diabetic\n");

  else
  printf("diabetic\n");

  break;
  default:
  printf("invalid entry\n");
break;
}
return 0;
}
