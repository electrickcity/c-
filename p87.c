#include <stdio.h>
int main(void)
{
  int x,y;
  scanf("%d %d", &x, &y);
  printf("%d + %d = %d\n", x,y,x+y);
  printf("%d - %d = %d\n", x,y,x-y);
  printf("%d * %d = %d\n", x,y,x*y);
  printf("%d / %d = %d\n", x,y,x/y);
  printf(" x + y = %d", x + y);

  return 0;
}
