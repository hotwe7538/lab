/*
 char 관련 함수

  getchar()
   문자 입력 함수
  putchar()
   문자 출력 함수
*/
#include<stdio.h>
int main(void)
{
	int ch1, ch2;
	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1); putchar(ch2);

	return 0;

}