/* ���� ������ */
#include <stdio.h>

int main() {
	//	int a = 3;
	//	a = a + 3;
	//	printf("a �� ���� : %d \n", a);
	//	return 0;

	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	printf("a : %d \n", a);
	b += 1; // ���� ���Կ��� : b = b + 1 �� ���� ��
	printf("b : %d \n", b);
	++c; //  ������(prefix) ���� ������ : 1�� ������ �� ��� ��ȯ
	printf("c : %d \n", c);
	d++; // ������(postfix) ���� ������ : ��� ��ȯ �� 1�� ����
	printf("d : %d \n", d);

	return 0;
}