#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b������́F");
	scanf("%d", &s);

	if (s <= 5000) //�}�C�i�X�l�͓��͂���Ȃ����̂Ƃ���
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d ���� %d �� %d �b�ł�\n", h, m, s);
	}
	else
	{
		printf("ERROR:���͒l��5000�܂łɂ��Ă�������\n");
	}
}