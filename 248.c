#include <stdio.h>
int main(void)
{
  int months,days;
  printf("���� �Է��Ͻÿ�: ");
  scanf("%d",&months);
  if(months == 2)
  {
    days = 28;
    printf("%d���� �ϼ��� %d���Դϴ�.",months,days);
  }
  else if(months == 4 || months == 6 || months == 9 || months == 11 )
  {
    days = 30;
    printf("%d���� �ϼ��� %d���Դϴ�.",months,days );
  }
  else
  {
    days = 31;
    printf("%d���� �ϼ��� %d���Դϴ�.", months, days);
  }
  return 0;
}
