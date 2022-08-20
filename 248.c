#include <stdio.h>
int main(void)
{
  int months,days;
  printf("달을 입력하시오: ");
  scanf("%d",&months);
  if(months == 2)
  {
    days = 28;
    printf("%d월의 일수는 %d일입니다.",months,days);
  }
  else if(months == 4 || months == 6 || months == 9 || months == 11 )
  {
    days = 30;
    printf("%d월의 일수는 %d일입니다.",months,days );
  }
  else
  {
    days = 31;
    printf("%d월의 일수는 %d일입니다.", months, days);
  }
  return 0;
}
