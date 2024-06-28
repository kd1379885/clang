#include<stdio.h>
main()
{
	char go, ro;
	go = '5';	/*•Ï”go‚É5‚ğ‘ã“ü*/
	ro = '6';	/*•Ï”ro‚É6‚ğ‘ã“ü*/

	//5*6‚ÌŒ‹‰Ê‚ğgo‚Æro‚Ì‰‰Z‚ğg‚Á‚Ä%d‚Å•\¦
	printf("%d*%d=%d\n", go - 48, ro - 48, (go - 48) * (ro - 48));
}