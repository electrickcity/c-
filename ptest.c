#include <stdio.h>
int main(void)
{
  int months,days;
  printf("���� �Է��Ͻÿ�: ");
  scanf("%d",&months);
  switch(months)
  {
      case 2:
        days = 28;
      break;

      case 4:
      case 6:
      case 9:
      case 11:
        days = 30;
        break;

      default:
      days = 31;
      break;
  }

    printf("%d���� �ϼ��� %d�� �Դϴ�.", months, days);

  return 0;
}
