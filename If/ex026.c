#include<stdio.h>
main()
{
	int m, y;
	printf("西暦と月を入力：");
	scanf("%d %d", &y, &m);
	if (m==2)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			printf("最終日は29日です\n");
		}
		else
		{
			printf("最終日は28日です\n");
		}
	}
	else
	{
		if (m==4 || m==6 || m==9 || m==11)
		{
			printf("最終日は30日です\n");
		}
		else
		{
			printf("最終日は31日です\n");
		}
	}
}