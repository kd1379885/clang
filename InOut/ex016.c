#include<stdio.h>
main()
{
	float fno;
	printf("実数を入れて：");
	scanf("%f", &fno);
	printf("２倍すると%.0f\n３倍すると%.0f\n", fno * 2, fno * 3);
}