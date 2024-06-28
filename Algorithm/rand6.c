#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)＞");
	scanf("%d", &p);
	c = rand() % 3;

	switch (p) {
	case 1:
		printf("プレイヤーはグーです。\n");
		break;
	case 2:
		printf("プレイヤーはチョキです。\n");
		break;
	case 3:
		printf("プレイヤーはパーです。\n");
	}

	switch (c) {
	case 0:
		printf("コンピューターはグーです。\n");
		break;
	case 1:
		printf("コンピューターはチョキです。\n");
		break;
	case 2:
		printf("コンピューターはパーです。\n");
	}

	switch (((p - 1) - c + 3) % 3) {
	case 0:
		printf("\nあいこです。\n");
		break;
	case 1:
		printf("\nコンピューターの勝ちです。\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです。\n");
	}
}