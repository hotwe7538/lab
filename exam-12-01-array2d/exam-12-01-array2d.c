/*
 2���� �迭

*/
#include<stdio.h>

int main(void)
{
	int i, j;
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	// ��ü ����ϱ�
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// �迭 ��� ���� ��� 10���� �����ϱ�
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[i][j] = 10;
		}
		printf("\n");
	}

	// �ٽ� ����ϱ�
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}