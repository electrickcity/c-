#include <stdio.h>
int main(void)
{
  int grade, n;
  double sum, average;
  n = 0;
  sum = 0;
  grade = 0;
  printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");
  while(grade >= 0)
  {
      printf("������ �Է��Ͻÿ�: ");
      scanf("%d", &grade);
      sum = sum + grade;
      n++;
  }

  sum = sum - grade;
  n--;
  average = sum/n;
  printf("������ ����� %lf�Դϴ�.",average);
  return 0;

}
