#include<stdio.h>
main()
{
	int e, a, b;
	printf("���Z�q����́F");
	scanf("%d", &e);
	printf("�Q�̐�������́F");
	scanf("%d %d", &a, &b);
	if (e == 1)
	{
		printf("�����F%d\n", a + b);
	}
	else
	{
		if (e == 2)
		{
			printf("�����F%d\n", a - b);
		}
		else
		{
			if (e == 3)
			{
				printf("�����F%d\n", a * b);
			}
			else
			{
				if (e == 4)
				{
					printf("�����F%d\n", a / b);
				}
				else
				{
					printf("ERROR:���͂��ꂽ���Z�q�͑Ή����Ă���܂���\n");
				}
			}
			
		}
	}
}