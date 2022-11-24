/*
 EOF(End Of File)
	텍스트 파일을 읽어 들일 때 파일의 끝을 표현하기 위해 사용
	Ctrl + z
*/
#include<stdio.h>

int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();

		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}