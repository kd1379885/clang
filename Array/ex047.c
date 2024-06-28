#include<stdio.h>
main()
{
	int cnt1, cnt2;
	float gokei, x[3][2];
	for (cnt1 = 0; cnt1 < 3; cnt1++) {
		for (gokei = 0,cnt2 = 0; cnt2 < 2; cnt2++) {
			printf("x[%d][%d]=", cnt1, cnt2);
			scanf("%f", &x[cnt1][cnt2]);
			gokei += x[cnt1][cnt2];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", cnt1, gokei / 2);
	}
}