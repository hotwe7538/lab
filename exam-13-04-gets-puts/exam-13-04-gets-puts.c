/*
	gets()
		문자열 입력
	puts()
		문자열 출력
*/
#include<stdio.h>
int main(void)
{
	char ch[30];
	gets(ch);
	puts(ch); // 자동으로 줄바꿈
	printf("이 문자열은 다음줄에서 출력 됩니다.\n");

	return 0;
}