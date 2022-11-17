/*
 데이터 표현방식
   정수표현
     컴퓨터는 2진수로 표현(bit)
     부호비트(MSB) + 수치비트
     음의값을 표현할 때 2의 보수표현

   실수표현
      지수부비트 + 기수부비트
   실수표현 수식
     ±(1.m)*2^(e-127)
   부동소수점오차
     정확한 실수표현 불가능 근사치 값으로 인해 생긴 오차
   
   ! 검색하기 : 부동소수점 오차 예외처리방법

   unsigned 자료형


*/
#include <stdio.h>
int main(void)
{
    float err_num = 0;
    for (int i = 0; i < 100; i++)
    {
        err_num += 0.1; // err_num = err_num + 0.1;
    }
    printf("%f\n", err_num);

    /*
    unsigned 자료형
        부호없는 데이터
        0이상 표현
        음수포기 대신 양수표현범위 커진다.
    */

    char cnum = 128; // char 형의 최대값은 127입니다. 
    unsigned char u_cnum = 128;
    short snum = 32768; // short 형의 최대값은 32768입니다.
    unsigned short u_snum = 32768;

    printf("%d\n", cnum);
    printf("%d\n", u_cnum);
    printf("%d\n", snum);
    printf("%d\n", u_snum);
}