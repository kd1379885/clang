#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("’Tõ’ls‚ğ“ü—Í:");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("’Tõ’l%d‚ğdata[%d]‚Å”­Œ©\n", s, i);
	}
}