#include <stdio.h>
int main(void)
{
  int x;
  int remake;
  int result;
  int rezero;
  int remain;

  printf("정수를 입력하시오:");
  scanf("%d",&x);
  remake = x/100;
  result = x%100;
  rezero = result/10;
  remain = result%10;




  printf("백의 자리:%d\n", remake);
  printf("십의 자리:%d\n", rezero);
  printf("일의 자리:%d\n", remain);

  return 0;



}
