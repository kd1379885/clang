#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int i, sum = 0;
	if (argc >= 3) {
		for (i = 1; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		printf("合計=%d\n", sum);
	}
	else {
		printf("2つ以上の引数(整数)を設定して実行してください\n");
	}
}