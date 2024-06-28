#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a, b, c, cnt;
	srand(time(0));
	rand();
	for (cnt = 0; cnt < 10; cnt++) {
		a = rand() % 100;
		b = rand() % 41 + 10;
		c = rand() % 301 - 100;
		printf("a=%d b=%d c=%d\n", a, b, c);
	}
}