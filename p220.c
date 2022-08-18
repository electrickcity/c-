#include <stdio.h>
int main(void)
{
  int x,y,z;
  int result;
  printf("3개의 정수를 입력하시오:");
  scanf("%d %d %d",&x,&y,&z);

  result = (x>y)?x:y;


  printf("최댓값:%d",(result>z)?result:z);


  return 0;

}
