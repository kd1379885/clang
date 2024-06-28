#include<stdio.h>
main()
{
	int cnt1, cnt2, cnt3, sum;
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	for (sum = 0, cnt1 = 0; cnt1 < 2; cnt1++) {
		printf("アパート%d ", cnt1 + 1);
		for (cnt2 = 0; cnt2 < 2; cnt2++) {
			printf("(%d階)：", cnt2 + 1);
			for (cnt3 = 0; cnt3 < 3; cnt3++) {
				printf("%d ", a[cnt1][cnt2][cnt3]);
				sum += a[cnt1][cnt2][cnt3];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n", sum);
}