#include <stdio.h>
int main(void)
{	
	int x;



	for (;;)
	{

		printf("\n막대의 높이(종료: -1): ");
		scanf_s("%d", &x);

		if (x == -1)
		{
			break;
		}

		for (int i = 1; i <= x; i++)
		{
			if (x >= 1 && x <= 50)
			{
				printf("*");
			}
		
		}
	
	}
	
	return 0;

}