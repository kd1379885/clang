#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	if ('A' <= moji && moji<='Z')
	{
		printf("�ϊ�����ƁF%c\n", moji + 32);
	}
	else
	{
		if ('a' <= moji && moji <= 'z')
		{
			printf("�ϊ�����ƁF%c\n", moji - 32);
		}
		else
		{
			printf("ERROR:�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}