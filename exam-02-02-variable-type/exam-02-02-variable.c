/*
c언어 기본 자료형 종류

   문자형 자료형 - char
   정수형 자료형 - short, int, long, long long
   실수형 자료형 - float, double, long double

   char			1바이트       -128 ~ +127
   short		2바이트       -32,768 ~ +32,767
   int			4바이트       -2,147,483,648 ~ +2,147,483,647
   long			4바이트		  -2,147,483,648 ~ +2,147,483,647
   long long	8바이트       -9,223,372,036,854,775,808
								~ +9,223,372,036,854,775,807
   float        4바이트       ±3.4x10^-37 ~ ± ±3.4x10^+38
   double		8바이트       ±1.7x10^-307 ~ ±1.7x10^+308
   long double  8바이트 이상  double 이상의 표현 범위

   
*/

#include <stdio.h>

int main(void) {

	//정의 되어 있지 않은 값을 처리할 때 컴파일러는
	printf("sizeof(100) : %d\n", sizeof(100));
	printf("sizeof(3.14) : %d\n", sizeof(3.14));

	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	// 아스키코드 문자값으로 출력
	printf("%c\n", ch1);
	printf("%d\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
	
}