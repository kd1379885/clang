#include<stdio.h>
main()
{
	int i, cnt;
	cnt = 0;
	printf("���́H�F");
	scanf("%d", &i);
	do {
		printf("*****\n");
		cnt++;	//cnt--;
	} while (cnt < i);	//while(cnt>0);
}