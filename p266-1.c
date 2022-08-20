#include <stdio.h>
int main(void)
{
  int n;
  int i;
  printf("출력하고 싶은단: ");
  scanf("%d",&n);
  for(i=1; i<=9; i++)
  {
    printf("%d*%d=%d\n",n,i,n*i);
  }
  return 0;
}
