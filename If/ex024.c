#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if (65<=moji && moji<=90)	//'A'<=moji && moji<='Z' 等のほうがわかりやすい
	{
		printf("大文字です\n");
	}
	else
	{
		printf("その他の文字です\n");
	}
}