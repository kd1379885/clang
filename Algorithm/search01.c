#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("探索値sを入力:");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dをdata[%d]で発見\n", s, i);
	}
}