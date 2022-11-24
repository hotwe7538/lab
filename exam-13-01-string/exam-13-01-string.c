/*
 문자열
	c언어에서 문자열은 큰따옴표(")를 이용해서 표현
	문자열은 문자(char)로 이루어진 배열
	문자열 끝은 널(Null) 문자로 표시


*/

#include<stdio.h>

int main(void)
{
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("1-1 : %s \n", good);
	printf("1-2 : %s \n", bad);
	printf("1 : %p %p \n", good, bad);

	// 배열 기반의 문자열 변수
	good[0] = 'H'; // 값 변경 가능
	// good = "New Good"; // 불가능(배열이름이 상수여서)

	// 포인터 기반의 문자열 변수
	//bad[0] = 'S'; // 값 변경 불가능
	bad = "New Bad"; // 가능

	printf("2-1 : %s \n", good);
	printf("2-2 : %s \n", bad);
	printf("2 : %p %p \n", good, bad);

	return 0;


}