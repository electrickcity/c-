#include <stdio.h>
int main(void)
{
  int score;
  printf("������ �Է��Ͻÿ�: ");
  scanf("%d", &score);

  if(score > 90)
  {
    printf("���� A\n");
  }
  if(score >= 80)
  {
    printf("���� B\n");
  }
  if(score >= 70)
  {
    printf("���� C\n");
  }
  if(score >= 60)
  {
    printf("���� D\n");
  }
  else
  {
    printf("����F\n");
  }
  return 0;
}
