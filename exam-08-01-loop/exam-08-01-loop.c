/*
�ݺ���
	Ư���� �κ��� �ڵ尡 �ݺ������� ����� �� �ֵ��� �ϴ� ����

1. while ��
while(����)
{
	�ݺ� ����� �ڵ�
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	/*
	int num = 0;
	while (num < 3)
	{
		printf("num is %d now\n", num);
		num++;
	}
	*/

	int num2 = 0;
	while (num2 != -1)
	{
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num2);
		if (num2 == -1)
			printf("�����մϴ�.");
		else
			printf("%d��(��) �Է��ϼ̳׿�.\n", num2);
	}

	return 0;
}