#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un, cnt;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は");

	for (cnt = 0; cnt < un; cnt++) {
		printf("★");
	}
	printf(" です\n");
}