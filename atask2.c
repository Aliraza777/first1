   #include <stdio.h>
   int main()
   {
   int size;
   printf("enter size of array\n");
   scanf("%d",&size);
   int num[size];

    int freq[10];

   for(int a=0;a<size;a++)
    {
      printf("enter num 1-10\n");
      scanf("%d",&num[a]);
    }
printf("Numbers\t|Frequency| Histogram\n");
int a=0;
   for(int b=1;b<11;b++)
     {
       int count=0;
       for(int a=0;a<size;a++)
        {
         if(b==num[a])
        {
          count++;
        }
      }
        freq[a]=count;
        printf("%4d\t| %6d  |",b,freq[a]);
        for(int c=0;c<count;c++)
        {
          printf("*");
        }
        printf("\n");
     }


    return 0;
   }
