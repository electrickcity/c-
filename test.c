#include <stdio.h>
int main(void)
{

  double area, base, height;
  scanf("%lf %lf",&base,&height);
  printf("�ﰢ���� �غ�: %.lf\n", base);
  printf("�ﰢ���� ����: %.lf\n", height);
  area = 0.5*height*base;
  printf("�ﰢ���� ����: %lf", area);


  return 0;

}
