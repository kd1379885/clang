#include<stdio.h>
main()
{
	int i;
	char data[7] = "orange";
	
	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("文字列：orange\n");
	printf("文字数は%d文字\n", i);
}