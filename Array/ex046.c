#include<stdio.h>
main()
{
	int cnt1, cnt2, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (cnt1 = 0; cnt1 <= 1; cnt1++) {
		for (gokei = 0, cnt2 = 0; cnt2 <= 2; cnt2++) {
			printf("a[%d][%d]=%d\n", cnt1, cnt2, a[cnt1][cnt2]);
			gokei += a[cnt1][cnt2];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", cnt1, gokei);
	}
}