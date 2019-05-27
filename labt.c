#include<stdio.h>
int main()
{
  int db,mb,yb,cd=26,cm=1,cy=2019;
  printf("Enter your days of birth\n");
   scanf("%d",&db);
   printf("Enter your month of birth\n");
   scanf("%d",&mb);
   printf("Enter your year of birth\n");
   scanf("%d",&yb);
   int a=db+(mb*30)+(yb*365);
   int c=cd+(cm*30)+(cy*365);
   int d=c-a;
   if(d/365>=18)
   {
     printf("you are eligible\n");
   }
   else
   printf("you are not eligible\n");
   return 0;
}
