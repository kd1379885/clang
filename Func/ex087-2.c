#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int i, sum = 0;
	if (argc >= 3) {
		for (i = 1; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		printf("‡Œv=%d\n", sum);
	}
	else {
		printf("2‚ÂˆÈã‚Ìˆø”(®”)‚ðÝ’è‚µ‚ÄŽÀs‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}