#include <stdio.h>
int main(void)
{
  int x,y,z;
  int result;
  printf("3���� ������ �Է��Ͻÿ�:");
  scanf("%d %d %d",&x,&y,&z);

  result = (x>y)?x:y;


  printf("�ִ�:%d",(result>z)?result:z);


  return 0;

}
