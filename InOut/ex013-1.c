#include<stdio.h>
main()
{
	char go, ro;
	go = '5';	/*�ϐ�go��5����*/
	ro = '6';	/*�ϐ�ro��6����*/

	//5*6�̌��ʂ�go��ro�̉��Z���g����%d�ŕ\��
	printf("%d*%d=%d\n", go - 48, ro - 48, (go - 48) * (ro - 48));
}