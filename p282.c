#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  srand(time(NULL));
  int answer = rand()%100+1;
  int guess;
  int tries = 0;
  do
  {
    printf("������ ������ ���ÿ�: ");
    scanf("%d", &guess);
    tries++;
    if(guess > answer )
    {
      printf("������ ������ �����ϴ�.\n");
    }
    if(guess < answer)
    {
      printf("������ ������ �����ϴ�.\n");
    }
    if(guess == answer)
    {
      printf("�����մϴ�\n");
    }

    printf("�õ�Ƚ��=%d\n",tries);
  } while( guess != answer);

  return 0;
}
