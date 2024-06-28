#include<stdio.h>
main()
{
	int e, a, b;
	printf("演算子を入力：");
	scanf("%d", &e);
	printf("２つの整数を入力：");
	scanf("%d %d", &a, &b);
	if (e == 1)
	{
		printf("答え：%d\n", a + b);
	}
	else
	{
		if (e == 2)
		{
			printf("答え：%d\n", a - b);
		}
		else
		{
			if (e == 3)
			{
				printf("答え：%d\n", a * b);
			}
			else
			{
				if (e == 4)
				{
					printf("答え：%d\n", a / b);
				}
				else
				{
					printf("ERROR:入力された演算子は対応しておりません\n");
				}
			}
			
		}
	}
}