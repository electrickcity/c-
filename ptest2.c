#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int answer = rand()%100+1;
  int guess;
  int tries = 0;
  do
  {
    printf("������ �����Ͽ� ���ÿ�: ");
    scanf("%d", &guess);
    tries++;
    if(guess > answer)
    printf("������ ������ �����ϴ�\n");
    if(guess < answer)
    printf("������ ������ �����ϴ�\n");
    if(guess == answer)
    printf("�����մϴ�\n");
    printf("�õ�ȸ��=%d\n",tries);
  }while(guess!=answer);
  return 0;

}
