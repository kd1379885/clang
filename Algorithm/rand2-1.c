#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dice, cnt;
	srand(time(0));
	rand();
	for (cnt = 0; cnt < 10; cnt++) {
		dice = rand() % 6 + 1;
		printf("ƒTƒCƒRƒ‚Í%d‚Å‚·\n", dice);
	}
}