#include<stdio.h>
main()
{
	int i;
	float sum, box[3];
	for (i = 0, sum = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計は%.2fです\n", sum);
	printf("平均は%.2fです\n", sum / 3);
}