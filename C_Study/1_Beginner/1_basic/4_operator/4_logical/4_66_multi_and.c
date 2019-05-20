#include <stdio.h>
/* ³í¸® AND Áø¸®Ç¥
 * AÁ¶°Ç	BÁ¶°Ç	cÁ¶°Ç	°á°ú
 * °ÅÁþ		°ÅÁþ	°ÅÁþ	°ÅÁþ
 * °ÅÁþ		°ÅÁþ	Âü		°ÅÁþ
 * °ÅÁþ		Âü		°ÅÁþ	°ÅÁþ		
 * Âü		°ÅÁþ	°ÅÁþ	°ÅÁþ
 * °ÅÁþ		Âü		Âü		°ÅÁþ
 * Âü		°ÅÁþ	Âü		°ÅÁþ
 * Âü		Âü		°ÅÁþ	°ÅÁþ
 * Âü		Âü		Âü		Âü
 */

void main(){
		int num1=10;
		int num2=12;
		int num3=35;
		int result;
		
		printf("num1: %d, num2:%d, num3:%d\n",num1,num2,num3);

		// °ÅÁþ && °ÅÁþ && °ÅÁþ
		result = (num1 == 1 && num2 == 2 && num3 == 3);
		printf("(num1 == 1 && num2 == 2 && num3 == 3) => Æò°¡°á°ú: %d\n", result);
		
		// °ÅÁþ && °ÅÁþ && Âü
		result = (num1 == 1 && num2 == 2 && num3 == 35);
		printf("(num1 == 1 && num2 == 2 && num3 == 35) => Æò°¡°á°ú: %d\n", result);

		// °ÅÁþ && Âü && °ÅÁþ
		result = (num1 == 1 && num2 == 12 && num3 == 3);
		printf("(num1 == 1 && num2 == 12 && num3 == 3) => Æò°¡°á°ú: %d\n", result);

		// Âü && °ÅÁþ && °ÅÁþ
		result = (num1 == 10 && num2 == 2 && num3 == 3);
		printf("(num1 == 10 && num2 == 2 && num3 == 3) => Æò°¡°á°ú: %d\n", result);
		
		// °ÅÁþ && Âü && Âü
		result = (num1 == 1 && num2 == 12 && num3 == 35);
		printf("(num1 == 1 && num2 == 12 && num3 == 35) => Æò°¡°á°ú: %d\n", result);
		
		// Âü && °ÅÁþ && Âü
		result = (num1 == 10 && num2 == 2 && num3 == 35);
		printf("(num1 == 10 && num2 == 2 && num3 == 35) => Æò°¡°á°ú: %d\n", result);
		
		// °ÅÁþ && Âü && Âü
		result = (num1 == 1 && num2 == 12 && num3 == 35);
		printf("(num1 == 1 && num2 == 12 && num3 == 35) => Æò°¡°á°ú: %d\n", result);
		
		// Âü && Âü && Âü
		result = (num1 == 10 && num2 == 12 && num3 == 35);
		printf("(num1 == 10 && num2 == 12 && num3 == 35) => Æò°¡°á°ú: %d\n", result);
}
