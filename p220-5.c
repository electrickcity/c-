#include <stdio.h>
int main(void)
{
  int x;
  int remake;
  int result;
  int rezero;
  int remain;

  printf("������ �Է��Ͻÿ�:");
  scanf("%d",&x);
  remake = x/100;
  result = x%100;
  rezero = result/10;
  remain = result%10;




  printf("���� �ڸ�:%d\n", remake);
  printf("���� �ڸ�:%d\n", rezero);
  printf("���� �ڸ�:%d\n", remain);

  return 0;



}
