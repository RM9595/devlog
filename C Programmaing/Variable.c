/* 변수 알아보기 1 */
#include <stdio.h>

int main() {
	int a;
	a = 127;
	/* %d << 10진수로 출력, %o << 8진수로 출력, %x << 16진수로 출력 */
	printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a);
	printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a);
	return 0;
}

/* char << 1byte. -128 ~ 127. unsigned char은 0 ~ 255.
   short << 2byte. -32,768 ~ 32,767.
   int << 4byte. -2,147,483,648 ~ 2,147,483,647.
   long << 8byte.
   long long << 최소 8byte
   float << 4byte. 10진수로 6자리
   double << 8byte. 10진수로 15자리
   */