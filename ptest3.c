#include <stdio.h>
int main(void)
{

    int x;
    int i;
    int sum;

   i=1;
   sum=0;
   scanf("%d", &x);
   for(;;)
   {
     sum = x*(x+1)/2;
     if (sum<10000)
     {

     if (i==x)
     {


       sum = x*(x+1)/2;
       printf("1���� %d������ ���� %d�Դϴ�.",x,sum);
       break;
     }

   }
   else
   {
     //printf("%d", sum);
     break;
   }
     i++;
  }





return 0;

}
