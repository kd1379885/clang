#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[100], cnt, cnt2, cnt3, cnt4, cnt5, cnt6;
	cnt = 0;	
	cnt2 = 0;	
	cnt3 = 0;	//�K�`����
	cnt4 = 0;	//��3�l����
	cnt5 = 0;	//��4�l����
	cnt6 = 0;	//��5�l����
	int i, s = 0, ss = 0;
	srand(time(0));
	while (1) {
		printf("0:�I�� 1:�P�� 2:10�A >");
		scanf("%d", &i);
		switch (i) {
		case 0:
			printf("�V�X�e���I��\n");
			printf("\n");
			printf("��3�l���� >%d\n", cnt4);
			printf("��4�l���� >%d\n", cnt5);
			printf("��5�l���� >%d\n", cnt6);
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