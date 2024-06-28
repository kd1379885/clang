#include<stdio.h>
enum BitState
{
	Base = 0,				//00000000 �ʏ���
	Poison = 1 << 0,		//00000001 �ŏ��
	Sleep = 1 << 1,			//00000010 ������
	Paralisis = 1 << 2,		//00000100 ��჏��
	Burn = 1 << 3,			//00001000 �Ώ����
	AtkUp = 1 << 4,			//00010000 �U��UP���
	AtkDown = 1 << 5		//00100000 �U��DOWN���
};
typedef unsigned int UNIT;
void DisplayStates(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT* s);

main()
{
	UNIT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStates(MyState);
	ClearFlag(&MyState);
	DisplayStates(MyState);
}

void DisplayStates(UNIT s)
{
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralisis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�Ώ�\n");
	}
	if (s & AtkUp) {
		printf("�U��UP\n");
	}
	if (s & AtkDown) {
		printf("�U��DOWN\n");
	}
	if (s == Base) {
		printf("�������\n");
	}
	printf("******************\n");
}

void ChangeFlag(UNIT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U��UP 6:�U��DOWN 0:���͏I����");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralisis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U��UP 6:�U��DOWN 0:���͏I����");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralisis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}