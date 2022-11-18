/*
 break문
	 반복문을 벗어난다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	while (1)
	{
		printf("-1 입력시 종료 : ");
		scanf("%d", &num);
		if (num == -1)
			break;
	}
}