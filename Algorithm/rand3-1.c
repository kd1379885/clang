#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k, cnt;
	srand(time(0));
	rand();
	for (cnt = 0; cnt < 10; cnt++) {
		k = rand() % 100 + 1;
		if (k <= 30) {
			printf("‰ïS‚ÌˆêŒ‚!!\n");
		}
		else {
			printf("’ÊíUŒ‚\n");
		}
	}
}