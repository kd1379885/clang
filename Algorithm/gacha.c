#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[100], cnt, cnt2, cnt3, cnt4, cnt5, cnt6;
	cnt = 0;	
	cnt2 = 0;	
	cnt3 = 0;	//ƒKƒ`ƒƒ‰ñ”
	cnt4 = 0;	//š3Šl“¾‰ñ”
	cnt5 = 0;	//š4Šl“¾‰ñ”
	cnt6 = 0;	//š5Šl“¾‰ñ”
	int i, s = 0, ss = 0;
	srand(time(0));
	while (1) {
		printf("0:I—¹ 1:’P”­ 2:10˜A >");
		scanf("%d", &i);
		switch (i) {
		case 0:
			printf("ƒVƒXƒeƒ€I—¹\n");
			printf("\n");
			printf("š3Šl“¾‰ñ” >%d\n", cnt4);
			printf("š4Šl“¾‰ñ” >%d\n", cnt5);
			printf("š5Šl“¾‰ñ” >%d\n", cnt6);
			break;
		case 1:
			cnt3 += 1;
			for (cnt = 1; cnt <= 1; cnt++) {
				data[cnt] = rand() % 1000 + 1;
			}
			for (cnt = 1; cnt <= 1; cnt++) {
				printf("data[%d]=%d\n", cnt, data[cnt]);
			}
			break;
		case 2:
			cnt3 += 10;
			for (cnt = 1; cnt <= 10; cnt++) {
				data[cnt] = rand() % 1000 + 1;
			}
			for (cnt = 1; cnt <= 10; cnt++) {
				printf("data[%d]=%d\n", cnt, data[cnt]);
			}
			break;
		}
		if (i == 0) {
			break;
		}
	}
}