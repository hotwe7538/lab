/*
  자료형 변환
    데이터 타입을 변경하는 것.

    형변환시 데이터 소실우려가 있다.
*/

#include <stdio.h>

int main(void)
{
    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 70000;

    printf("%f\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    printf("%d\n", (short)3.1415);
    printf("%d\n", (int)3.1415);
    printf("%f\n", (double)10);
    printf("%f\n", (float)10);


}