#include<stdio.h>
main()
{
	int gokei, num, i;
	printf("���́H�F");
	scanf("%d", &num);
	for (gokei = 0,i = 0; num != -999; i++)
	{
		gokei += num;
		printf("���́H�F");
		scanf("%d", &num);
	}
	printf("���v=%d ����=%.2f\n", gokei, (float)gokei / i);
}