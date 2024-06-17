/* 산술 연산 */
#include <stdio.h>

int main() {
	int a, b;
	a = 10;
	b = 3;
	printf("a + b 는 : %d \n", a + b);
	printf("a - b 는 : %d \n", a - b);
	printf("a * b 는 : %d \n", a * b);
	printf("a / b 는 : %d \n", a / b);
	printf("a %% b 는 : %d \n", a % b);
	return 0;
}

/* >> + , - , * , / , % 는 산술 연산자. 여기서 %(정수)는 나눈 나머지 값
   >> 정수형을 사용했을 시, 실수형 출력하는 %f는 오류.
   >> 반대로 정수형과 실수형 변수 사용 시 %f는 산술변환으로 사용 가능
   */