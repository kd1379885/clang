#include<stdio.h>
main()
{
	float no1, no2, no3;
	printf("１つ目の実数：");
	scanf("%f", &no1);
	printf("２つ目の実数：");
	scanf("%f", &no2);
	printf("３つ目の実数：");
	scanf("%f", &no3);
	printf("合計=%.0f 平均=%.0f", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}