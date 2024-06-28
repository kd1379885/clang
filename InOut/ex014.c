#include<stdio.h>
main()
{
	int no;		//整数型変数noの宣言
	printf("整数を入れて：");	//整数の入力を促す表示
	scanf("%d", &no),	//キーボードから整数を入力して変数noへ代入
	printf("入力値は%dです\n", no);		//変数noを10進整数(%d)で表示
}