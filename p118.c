#include <stdio.h>
int main(void)
{
  double rate;
  double usd;
  int krw;

  printf("환율을 입력하시오: ");
  scanf("%lf", &rate);

  printf("원화금액을 입력하시오: ");
  scanf("%d", &krw);
  usd = krw/rate;
  printf("원화 %d원은 %f달러입니다.", krw, usd);

  return 0;

}
