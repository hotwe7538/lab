#include<stdio.h>

// 반환 타입이 char 포인터변수
char* getString(void)
{
	char str[100];
	printf("좋아하는 단어는 ?");
	gets(str); // 문자열 입력함수 scanf 비슷

	return str;
}

int main(void)
{
	char* result = getString();
	printf("당신이 좋아하는 단어는 : %s\n", result);

	return 0;
}