// getchar�֐����g�p�����A��1�������͂̒�΃p�^�[��
// ���ȏ��ɂ͖������ǉ�

#include <stdio.h>
main()
{
	// getchar�֐��́u���͏I���v�̏ꍇ��EOF(-1)��߂�l�Ƃ��ĕԂ�����int�^���g�p����
	int c;

	// �A��1�������͂̒�΃p�^�[��
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}