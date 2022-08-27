#include <stdio.h>
int main(void)
{

    int x;
    int i;
    int sum;

   i=1;
   scanf("%d", &x);
   for(;;)
   {

     if (sum<100000)
     {

     if (i==x)
     {


       sum = x*(x+1)/2;
       printf("1부터 %d까지의 합이 %d입니다.",x,sum);
       break;
     }

   }
   else
   break;
     i++;
  }





return 0;

}
