#include<stdio.h>
main()
{
	int cnt1, cnt2, i;
	cnt1 = 0;
	cnt2 = 0;
	printf("���́H�F");
	scanf("%d", &i);
	do {
		do {
			printf("*");
			cnt1++;
		} while (cnt1 < 5);
		printf("\n");
			cnt1 = 0;	//
			cnt2++;		//num--; �݂̂ł���
	} while (cnt2 < i);	//(num>0);
}