/*
 �迭 ������
*/

#include<stdio.h>

int main(void)
{
	// 2���� ��� 3���� ���� �̷���� 2���� �迭
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	
	// ���� 3���� 2���� �迭�� ������
	int(*arrptr)[3] = arr;

	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",arrptr[i][j]);
		}
		printf("\n");
	}

	return 0;
}