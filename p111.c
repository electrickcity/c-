#include <stdio.h>
int main(void)
{
  int x,y;
  int sum, def, mul, div;

  //x = 20;
  //y = 10;
  scanf("%d %d", &x , &y);
  sum = x+y;
  def = x-y;
  mul = x*y;
  div = x/y;

  printf("�μ��� ��: %d + %d = %d",x,y, sum);
  printf("�μ��� ��: %d - %d = %d",x,y, def);
  printf("�μ��� ��: %d * %d = %d",x,y, mul);
  printf("�μ��� ��: %d / %d = %d",x,y, div);


}
