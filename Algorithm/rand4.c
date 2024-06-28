#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un, cnt;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");

	for (cnt = 0; cnt < un; cnt++) {
		printf("š");
	}
	printf(" ‚Å‚·\n");
}