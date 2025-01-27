#include<stdio.h>
enum BitState
{
	Base = 0,				//00000000 通常状態
	Poison = 1 << 0,		//00000001 毒状態
	Sleep = 1 << 1,			//00000010 眠り状態
	Paralisis = 1 << 2,		//00000100 麻痺状態
	Burn = 1 << 3,			//00001000 火傷状態
	AtkUp = 1 << 4,			//00010000 攻撃UP状態
	AtkDown = 1 << 5		//00100000 攻撃DOWN状態
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paralisis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃UP\n");
	}
	if (s & AtkDown) {
		printf("攻撃DOWN\n");
	}
	if (s == Base) {
		printf("初期状態\n");
	}
	printf("******************\n");
}

void ChangeFlag(UNIT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃UP 6:攻撃DOWN 0:入力終了＞");
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
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃UP 6:攻撃DOWN 0:入力終了＞");
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