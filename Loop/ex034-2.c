#include<stdio.h>
main()
{
	int cnt1, cnt2, i;
	cnt1 = 0;
	cnt2 = 0;
	printf("”‚ÍHF");
	scanf("%d", &i);
	do {
		do {
			printf("*");
			cnt1++;
		} while (cnt1 < 5);
		printf("\n");
			cnt1 = 0;	//
			cnt2++;		//num--; ‚Ì‚İ‚Å‚à‰Â
	} while (cnt2 < i);	//(num>0);
}