#include<stdio.h>
main()
{
	char s[101];
	int k[100], i;
	printf("���������͂��ĉ�����>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("������������́A%s\n", &s[0]);
}