#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z')
	{
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else
	{
		if ('a' <= moji & moji<='z')
		{
			printf("�A���t�@�x�b�g�ł�\n");
		}
		else
		{
			if ('0' <= moji && moji <= '9')
			{
				printf("�����ł�\n");
			}
			else
			{
				printf("���̑��̕����ł�\n");
			}
		}
	}
}