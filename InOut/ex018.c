#include<stdio.h>
main()
{
	int no1, no2, no3, sum;
	float avg;

	printf("�������R���́F");
	scanf("%d%d%d", &no1, &no2, &no3);		//�����f�[�^����x�ɓ���
	
	sum = no1 + no2 + no3;
	avg = (float)sum / 3;	//�L���X�g(�^�ϊ�)

	printf("���v=%d\t ����=%.2f\n", sum, avg);	//\t(tab)���g�p

}