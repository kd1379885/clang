#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("�T���ls�����:");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d��data[%d]�Ŕ���\n", s, i);
	}
}