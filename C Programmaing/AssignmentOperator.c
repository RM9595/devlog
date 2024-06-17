/* 대입 연산자 */
#include <stdio.h>

int main() {
	//	int a = 3;
	//	a = a + 3;
	//	printf("a 의 값은 : %d \n", a);
	//	return 0;

	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	printf("a : %d \n", a);
	b += 1; // 복합 대입연산 : b = b + 1 과 같은 뜻
	printf("b : %d \n", b);
	++c; //  전위형(prefix) 증감 연산자 : 1씩 증가한 후 결과 반환
	printf("c : %d \n", c);
	d++; // 후위형(postfix) 증감 연산자 : 결과 반환 후 1씩 증가
	printf("d : %d \n", d);

	return 0;
}