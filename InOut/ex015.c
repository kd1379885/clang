#include<stdio.h>
main()
{
	//scanfを２回使った場合

	int no1, no2;
	printf("１つ目の整数：");
	scanf("%d", &no1);
	printf("２つ目の整数：");
	scanf("%d", &no2);
	printf("合計は%dです\n", no1 + no2);
}