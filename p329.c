#include <stdio.h>

int add(int x, int y);
int minus(int x, int y);
int mul(int x, int y);
int div(int x, int y);


int main(void)
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("x + y = %d\n", add(x,y));
  printf("x - y = %d\n", minus(x,y));
  printf("x * y = %d\n",mul(x,y));
  printf("x / y = %d\n", div(x,y));
  return 0;
}

int add(int x, int y)
{
  return x + y;
}
int minus(int x, int y)
{
  return x - y;
}
int mul(int x, int y)
{
  return x * y;
}
int div(int x, int y)
{
  return x / y;
}
