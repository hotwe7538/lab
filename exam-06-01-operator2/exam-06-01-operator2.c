/*
4. 논리 연산자
   && (AND) : 피연산자가 모두 참이면 참
   || (OR) : 피연산자 중 참이 있으면 참
   ! (NOT) : 피연산자가 참이면 거짓, 거짓이면 참(반전)
5. 삼항 조건 연산자
   조건 ? 참일경우 결과 : 거짓일경우 결과

6. 비트 단위 연산자
   &  : 대응이 되는 비트가 모두 1이면 1을 반환함. (비트 AND 연산)
   |  : 대응이 되는 비트 중에서 하나라도 1이면 1을 반환함 (비트  OR 연산)
   ^  : 대응이 되는 비트가 서로 다르면 1을 반환함. (비트 XOR 연산)
   ~  : 비트를 1이면 0으로, 0이면 1로 반전시킴. (비트 NOT 연산)
7. 시프트 연산자
   << 지정한 수만큼 비트들을 전부 왼쪽으로 이동시킴. (left shift 연산)
   >> 부호를 유지하면서 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴. (right shift 연산)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// 논리 연산자
	printf("논리 연산자 \n");
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("1) result : %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("2) result : %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("3) result : %d\n", result);

	printf("\n");

	// 삼항 연산자
	printf("삼항 연산자 \n");

	int num, absolute;

	printf("정수 입력 : ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("절대값 : %d\n", absolute);

	// 비트 연산자
	int a = 3; // 0000 0011
	int b = 5; // 0000 0101

	printf("3 & 5 = %d\n", a & b);
	printf("3 | 5 = %d\n", a | b);
	printf("3 ^ 5 = %d\n", a ^ b);
	printf("~3 = %d\n", ~a );

	// 쉬프트 연산자
	int x, y;
	x = 1;
	y = x << 2; //왼쪽으로 두 칸 이동
	printf("%d << 2 = %d\n", x, y);
	y = x >> 2; //오른쪽으로 두 칸 이동
	printf("%d >> 2 = %d\n", x, y);

	return 0;
}