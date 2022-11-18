/*
 3. for 문

 for(변수 초기화; 조건식; 증감식)
 {
	반복 실행할 코드
 }

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	/*
	int i;
	for (i = 0; i < 3; i += 1)
	{
		printf("i is %d now\n", i);
	}

	int j = 0; // 순서->1
	while (j < 3) // 2
	{
		printf("j is %d now\n", j); // 3
		j += 1; // 4
	}

	*/

	int num = 0;
	for (; num != -1;)
	{
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
		scanf("%d", &num);
		if (num == -1)
			printf("종료합니다.");
		else
			printf("%d을(를) 입력하셨네요.\n", num);
	}
}