#include<stdio.h>
main()
{
	float no1, no2, no3;
	printf("�P�ڂ̎����F");
	scanf("%f", &no1);
	printf("�Q�ڂ̎����F");
	scanf("%f", &no2);
	printf("�R�ڂ̎����F");
	scanf("%f", &no3);
	printf("���v=%.0f ����=%.0f", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}