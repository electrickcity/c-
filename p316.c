#include <stdio.h>
int main(void)
{
  int x;
  printf("������ �Է��Ͻÿ�: ");
  scanf("%d", &x);

  for (int i=1; i<=5; i++)
  {
    for(int j=1; j<=i; j++)
    {
        printf("%d",j);
    }
    for(int k=1; k<=5-i; k++)
    {
      printf("*");
    }






    printf("\n");
  }


}
