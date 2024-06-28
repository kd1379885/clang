#include<stdio.h>
enum BitState
{
	Base = 0,				//00000000 ’Êíó‘Ô
	Poison = 1 << 0,		//00000001 “Åó‘Ô
	Sleep = 1 << 1,			//00000010 –°‚èó‘Ô
	Paralisis = 1 << 2,		//00000100 –ƒáƒó‘Ô
	Burn = 1 << 3,			//00001000 ‰Îó‘Ô
	AtkUp = 1 << 4,			//00010000 UŒ‚UPó‘Ô
	AtkDown = 1 << 5		//00100000 UŒ‚DOWNó‘Ô
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("‡–°\n");
	}
	if (s & Paralisis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚UP\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚DOWN\n");
	}
	if (s == Base) {
		printf("‰Šúó‘Ô\n");
	}
	printf("******************\n");
}

void ChangeFlag(UNIT* s)
{
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚UP 6:UŒ‚DOWN 0:“ü—ÍI—¹„");
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
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚UP 6:UŒ‚DOWN 0:“ü—ÍI—¹„");
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