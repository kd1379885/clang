#include<stdio.h>
main()
{
	int su, cnt;
	cnt = 0;
	
	printf("数を入れて：");
	scanf("%d", &su);
	while (cnt < su)
	{
		printf("*");
		cnt += 1;
	}
	printf("\n");
}