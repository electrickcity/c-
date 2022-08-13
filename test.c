#include <stdio.h>
int main(void)
{

  double area, base, height;
  scanf("%lf %lf",&base,&height);
  printf("»ï°¢ÇüÀÇ ¹Øº¯: %.lf\n", base);
  printf("»ï°¢ÇüÀÇ ³ôÀÌ: %.lf\n", height);
  area = 0.5*height*base;
  printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf", area);


  return 0;

}
