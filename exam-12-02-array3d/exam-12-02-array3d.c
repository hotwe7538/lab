/*
 3���� �迭
*/
#include<stdio.h>
int main(void)
{
	short sarr[2][3][4];
	int iarr[2][3][4];

	printf("size of sarr : %d\n", sizeof(sarr));
	printf("size of iarr : %d\n", sizeof(iarr));

	// 3���� �迭 ����� ���ÿ� �ʱ�ȭ
	int arr[2][3][4] = {
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		},
		{
			{21,22,23,24},
			{25,26,27,28},
			{29,30,31,32}
		}
	};

	int i, j, k;
	// 3���� �迭�� ù��° 2���� �迭 �� ���
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[0][i][j]);
		}
		printf("\n");
	}

	printf("\n");

	// 3���� �迭�� ù��° 2���� �迭 �� ���
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[1][i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%d", arr[1][i][j]);
			}
			printf("\n");
		}
		printf("\n");

	}

	return 0;

}