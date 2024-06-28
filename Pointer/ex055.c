#include<stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	float sum = 0, ave;
	int i;
	int* p_a;	//ポインタ変数
	float* p_b;	//ポインタ変数

	//p_aにa配列の先頭アドレスを入れる
	p_a = &a[0];
	p_b = &b[0];

	for (i = 0; i < 6; i++) {
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("配列a 合計=%.0f 平均=%.3f\n", sum, ave);

	sum = 0;
	for (i = 0; i < 4; i++) {
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("配列b 合計=%.0f 平均=%.3f\n", sum, ave);
}