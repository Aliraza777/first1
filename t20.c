

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  printf("Player Name        Score        Balls           Sixs         Fours        Strike Rate\n");
int u=0,m=0,d=0,f=0,y=0,e=0,Team2player=0,a=0,b=0,Score=0,x=0,z=0,Teamplayer=0,p=0,score2=0,q=0,p6=0,p4=0,k=0,k1=0,a6=0,a4=0,b6=0,b4=0;
int balls=0,max1=0,max2=0,Strike=0;
int balls2=0,Strike2=0,series=0;
int t=0,l=0;
while(series<3)
{
while(f<=120)
{
  a=rand()%6 + 1;
  b=b+1;
  balls++;
if (a==6)
{a6++;}
if (a==4)
{a4++;}
        if(a==5)
       {
         Strike=(Score/b)*100;
         Teamplayer=Teamplayer+1;
          printf("palyer=%d            %d           %d               %d            %d              %d\n",Teamplayer,Score,b,a6,a4,Strike );
         if(Score>max1)
         {max1=Score;}
         Strike=0;
          a6=0;
          b=0;
          Score=0;
          a4=0;
         a=0;
     if(l==10)
          {
          break;
          }
      }

      Score=Score+a;

 m=m+a;
 f++;
}
printf("Score of Team Khan=%d\n", m );
printf("Total Balls Played=%d\n\n\n",balls );
printf("Player Name        Score        Balls       Sixs        Fours         Strike Rate\n");
while(x<=120)
{
  p = rand() % 6+1;
  q++;
  balls2++;
if(p==6)
{p6++;}
if(p==4)
{p4++;}
        if(p==5)
      {
        Strike2=(score2/q)*100;
         Team2player=Team2player+1;
         printf("palyer=%d            %d           %d            %d          %d             %d\n",Team2player,score2,q,p6,p4,Strike2 );
         if(score2>max2)
         {max2=score2;}
         Strike2=0;
         score2=0;
         q=0;
         p=0;
          p6=0;
          p4=0;
     if(t==10)
          {
          break;
          }
      }


 score2=score2+p;
 u=u+p;
 x++;
}
printf("Score of Team Alone=%d\n", u );
printf("Total Balls Played=%d\n",balls2 );
if(m==u)
{
  printf("************************\n" );
printf("Match is Tie\n" );
  printf("************************\n" );

}
if (m>u)
{
  printf("************************\n" );
  printf("Team Khan Wins\n" );
  printf("************************\n" );

}
else
{
  printf("************************\n" );
  printf("Team Alone Wins\n" );
  printf("************************\n" );

}
if(max1>max2)
{
  printf("************************\n" );
  printf("Man of the match %d\n",max1 );
  printf("************************\n" );

}
else
{
  printf("************************\n" );
  printf("Man of the match %d\n",max2 );
  printf("************************\n" );

}
Teamplayer=0;
Team2player=0;
m=0;
u=0;
balls=0;
balls2=0;
max1=0;
max2=0;
Strike=0;
Strike2=0;
series++;
}
return(0);
}
