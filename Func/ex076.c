#include<stdio.h>
void keisan(int x, int y, int* sum, float* avg);
main()
{
	int a, b, sum;
	float avg;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &sum, &avg);
	printf("‡Œv‚Í%d •½‹Ï‚Í%.2f\n", sum, avg);
}

void keisan(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = (float)(x + y) / 2;
}