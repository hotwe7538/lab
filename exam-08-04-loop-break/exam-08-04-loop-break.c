/*
 break��
	 �ݺ����� �����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	while (1)
	{
		printf("-1 �Է½� ���� : ");
		scanf("%d", &num);
		if (num == -1)
			break;
	}
}