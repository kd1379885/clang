#include<stdio.h>
void keisan(int x, int y, int* sum, float* avg);
main()
{
	int a, b, sum;
	float avg;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &sum, &avg);
	printf("���v��%d ���ς�%.2f\n", sum, avg);
}

void keisan(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = (float)(x + y) / 2;
}