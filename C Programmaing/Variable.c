/* ���� �˾ƺ��� 1 */
#include <stdio.h>

int main() {
	int a;
	a = 127;
	/* %d << 10������ ���, %o << 8������ ���, %x << 16������ ��� */
	printf("a �� ���� %d ������ %o �Դϴ�. \n", 8, a);
	printf("a �� ���� %d ������ %d �Դϴ�. \n", 10, a);
	printf("a �� ���� %d ������ %x �Դϴ�. \n", 16, a);
	return 0;
}

/* char << 1byte. -128 ~ 127. unsigned char�� 0 ~ 255.
   short << 2byte. -32,768 ~ 32,767.
   int << 4byte. -2,147,483,648 ~ 2,147,483,647.
   long << 8byte.
   long long << �ּ� 8byte
   float << 4byte. 10������ 6�ڸ�
   double << 8byte. 10������ 15�ڸ�
   */