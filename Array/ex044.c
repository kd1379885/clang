#include<stdio.h>
main()
{
	int i;
	char data1[100], data2[100], data3[100];

	printf("•¶š—ñ1‚ğ“ü—ÍF");
	scanf("%s", data1);

	printf("•¶š—ñ2‚ğ“ü—ÍF");
	scanf("%s", data2);

	printf("moji1=%s moji2=%s\n", &data1, &data2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");

	for (i = 0; data3[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = data3[i]; i++);

	printf("moji1=%s moji2=%s\n", &data1, &data2);
}