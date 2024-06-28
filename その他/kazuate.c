#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt;

	srand(time(0)); //乱数の初期化
	rand(); //rand()の空読み

	//1~100までの数をランダムに決定
	ans = rand() % 100 + 1;

	//ゲームタイトルの表示
	printf("数当てゲーム\n");
	printf("1~100までの数を少ない回数で当てるゲーム\n\n");
	cnt = 0; //入力回数の0クリア
	while (1) {
		//入力処理
		printf("数(1~100)を入力:");
		scanf("%d", &num);
		cnt++; //入力回数のカウントアップ

		//判定処理(else ifによる多分岐の練習)
		// ※教科書では「else if」はまだ出てない
		if (ans > num) {
			printf("%dより大きいです\n\n", num);
		}
		else if (ans < num) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("当たり! %d回で当てました\n", cnt);
			break;
		}
	}
}