/*
 메모리 동적할당

 malloc 함수
	사용자가 생성과 소멸의 시기를 결정할 수 있는 변수선언
*/
#include<stdio.h>
#include<stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

int main(void)
{
	int* iptr = (int*)malloc(sizeof(int) * 5); // int형 5개만큼 사이즈로 메모리공간 선언
	double* dptr = (double*)malloc(sizeof(double) * 3); // double형 3개만큼 
	int i;

	for (i = 0; i < 5; i++)
	{
		iptr[i] = 10 * (i + 1);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", iptr[i]);
	}
	printf("\n");

	dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.43;
	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	if (iptr != NULL) free(iptr); // free함수로 소멸가능 NULL이 아니면 소멸
	if (iptr != NULL) free(dptr); 

	return 0;
}