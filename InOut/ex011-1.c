#include<stdio.h>
main()
{
	char moji1, moji2, moji3;
	moji1 = 'A';
	moji2 = 'a';
	moji3 = '0';
	printf("A:%d 0x%x B:%d 0x%x\n", moji1, moji1, moji1 + 1, moji1 + 1);
	printf("C:%d 0x%x a:%d 0x%x\n", moji1 + 2, moji1 + 2, moji2, moji2);
	printf("b:%d 0x%x c:%d 0x%x\n", moji2 + 1, moji2 + 1, moji2 + 2, moji2 + 2);
	printf("0:%d 0x%x 1:%d 0x%x\n", moji3, moji3, moji3 + 1, moji3 + 1);
	printf("2:%d 0x%x  :%d 0x%x\n", moji3 + 2, moji3 + 2, moji3 - 16, moji3 - 16);
}