#include<stdio.h>
main()
{
	char go, ro;
	go = '5';	/*変数goに5を代入*/
	ro = '6';	/*変数roに6を代入*/

	//5*6の結果をgoとroの演算を使って%dで表示
	printf("%d*%d=%d\n", go - 48, ro - 48, (go - 48) * (ro - 48));
}