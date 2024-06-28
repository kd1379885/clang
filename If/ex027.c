#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if ('A' <= moji && moji<='Z')
	{
		printf("変換すると：%c\n", moji + 32);
	}
	else
	{
		if ('a' <= moji && moji <= 'z')
		{
			printf("変換すると：%c\n", moji - 32);
		}
		else
		{
			printf("ERROR:アルファベットを入力してください\n");
		}
	}
}