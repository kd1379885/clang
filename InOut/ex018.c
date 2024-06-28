#include<stdio.h>
main()
{
	int no1, no2, no3, sum;
	float avg;

	printf("整数を３個入力：");
	scanf("%d%d%d", &no1, &no2, &no3);		//複数データを一度に入力
	
	sum = no1 + no2 + no3;
	avg = (float)sum / 3;	//キャスト(型変換)

	printf("合計=%d\t 平均=%.2f\n", sum, avg);	//\t(tab)を使用

}