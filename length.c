#include<stdio.h>
void func(int *var1,int var2)
{
  int x;
  for(x=0;x<var2;x++)
  {*(var1+x)=*(var1+x)+1;


}
}
int main ()
{
  int var[]={11,22,33,44,55,66,77};
func(var,7);
for(int i=0;i<7;i++)
printf("value of var[%d]is:%d\n",i,var[i]);

return 0;


}
