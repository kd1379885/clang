#include<stdio.h>
main()
{
	int cnt1, cnt2, i;
	printf("���́H�F");
	scanf("%d", &i);
	cnt1 = 0;
	do {
		cnt2 = 0;
		do {
			printf(" ");
			cnt2++;
		} while (cnt2 < i - cnt1);

		cnt2 = 0;
		do {
			printf("*");
			cnt2++;
		} while (cnt2 < cnt1 + 1);

		printf("\n");
		cnt1++;
	} while (cnt1 < i);
}