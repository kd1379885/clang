#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z')
	{
		printf("アルファベットです\n");
	}
	else
	{
		if ('a' <= moji & moji<='z')
		{
			printf("アルファベットです\n");
		}
		else
		{
			if ('0' <= moji && moji <= '9')
			{
				printf("数字です\n");
			}
			else
			{
				printf("その他の文字です\n");
			}
		}
	}
}