#include <stdio.h>
int main ()
{
  int x,y,z,u;
x=1;
while (x<5)
{
  z=4;
  while (z>=x)
  {
    printf("   ");
    z--;
  }
  y=2;
  while (y<=x)
  {
    printf(" * ");
    y++;
  }
  u=1;
  while (u<=x)
  {
    printf(" * ");
    u++;
  }
  x++;
  printf("\n");
}

return 0;
}
