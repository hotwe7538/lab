#include<stdio.h>
int readArray(int *arr, int length)
{
	
	int i;
	int length = sizeof(arr) / sizeof(int);
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
	int length = sizeof(arr) / sizeof(int);
	readArray(arr, length); // 배열의 이름 arr를 포인터 변수에 대입

	return 0;
}