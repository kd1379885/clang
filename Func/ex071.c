#include<stdio.h>
int sum(int a, int b, int c);
float avg(int a, int b, int c);
main()
{
	int a, b, c;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	printf("合計は%d 平均は%.2f\n", sum(a, b, c), avg(a, b, c));
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

 float avg(int a, int b, int c)
{
	 return (float)sum(a, b, c) / 3;
}