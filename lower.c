#include<stdio.h>
#include<string.h>

int main ()
{
  char name[20];
  char second[20];

  printf("Enter name:\t");
  scanf("%s",name);
  printf("second name\t");
  scanf("%s",second);
//strcat(name," ");
//strcat(name, second);
int a=strcmp(name, second);
  printf("comparison: %d\n",a);

//printf("your full name is: %s",name);
  return 0;
}
