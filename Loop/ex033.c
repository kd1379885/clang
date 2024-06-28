#include<stdio.h>
main()
{
	int gokei, num, i;
	printf("数は？：");
	scanf("%d", &num);
	for (gokei = 0,i = 0; num != -999; i++)
	{
		gokei += num;
		printf("数は？：");
		scanf("%d", &num);
	}
	printf("合計=%d 平均=%.2f\n", gokei, (float)gokei / i);
}