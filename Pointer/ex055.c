#include<stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	float sum = 0, ave;
	int i;
	int* p_a;	//�|�C���^�ϐ�
	float* p_b;	//�|�C���^�ϐ�

	//p_a��a�z��̐擪�A�h���X������
	p_a = &a[0];
	p_b = &b[0];

	for (i = 0; i < 6; i++) {
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("�z��a ���v=%.0f ����=%.3f\n", sum, ave);

	sum = 0;
	for (i = 0; i < 4; i++) {
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("�z��b ���v=%.0f ����=%.3f\n", sum, ave);
}