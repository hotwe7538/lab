/*
파일명 : exam-16-01-function-array.c

 함수호출시 배열의 전달
	배열은 함수의 인자로 전달할 때는 배열의 이름은 포인터변수이고,
	배열의 이름이 저장하고 있는 데이터는 포인터(주소값)이다.
*/

#include<stdio.h>
int readArray(int* arr, int length)
{
	int i;
	printf("배열의 요소 읽어보기 : [ ");
	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < length)
		{
			printf(", ");
		}
		else
		{
			printf(" ");
		}
	}
	printf("]\n");
}

int main(void)
{
	int arr[3] = { 3, 6, 9 };
	readArray(arr, 3); // 배열의 이름 arr를 포인터 변수에 대입

	return 0;
}