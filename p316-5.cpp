#include <stdio.h>
int main(void)
{	
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	
	for (int i = 1; i <= x; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}