#include<stdio.h>
main()
{
	char s[101];
	int k[100], i;
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("復号化文字列は、%s\n", &s[0]);
}