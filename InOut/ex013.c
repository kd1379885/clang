#include<stdio.h>
main()
{
	char su;	/*文字型変数suの宣言*/
	su = '1';	/*変数suに文字として'1'を代入*/
	printf("su=1\n");
	printf("数値に変換:%d\n", su - 48);		/*変数suを%dで表示*/
}