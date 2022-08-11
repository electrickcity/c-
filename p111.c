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

  printf("두수의 합: %d + %d = %d",x,y, sum);
  printf("두수의 차: %d - %d = %d",x,y, def);
  printf("두수의 곱: %d * %d = %d",x,y, mul);
  printf("두수의 몫: %d / %d = %d",x,y, div);


}
