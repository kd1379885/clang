#include<stdio.h>
main()
{
	int m, y;
	printf("����ƌ�����́F");
	scanf("%d %d", &y, &m);
	if (m==2)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			printf("�ŏI����29���ł�\n");
		}
		else
		{
			printf("�ŏI����28���ł�\n");
		}
	}
	else
	{
		if (m==4 || m==6 || m==9 || m==11)
		{
			printf("�ŏI����30���ł�\n");
		}
		else
		{
			printf("�ŏI����31���ł�\n");
		}
	}
}