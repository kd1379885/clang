#include<stdio.h>
main()
{
	int a, b;
	b = 0;
	printf("�������āF");
	scanf("%d", &a);
	while (b < 11)
	{
		printf("%d+%d=%d\n", a, b, a + b);
		b++;
	}
}