/*
	2. switch ��
*/

#include<stdio.h>

int main(void)
{
	int num = 1;

	switch (num)
	{
	case 0:
		printf("0 �Դϴ�. \n");
		break;
	case 1:
		printf("1 �Դϴ�. \n");
		break;
	case 2:
		printf("2 �Դϴ�. \n");
		break;
	case 3:
		printf("3 �Դϴ�. \n");
		break;
	default:
		printf("0~3 ���Դϴ�.");
		break;
	}

	char ch = 'w';
	switch (ch) {
	case 'w':
		printf("������ �̵� \n");
		break;
	case 'a':
		printf("���� �̵� \n");
		break;
	case 's':
		printf("�ڷ� �̵� \n");
		break;
	case 'd':
		printf("���� �̵� \n");
		break;
	default:
		printf("�ڵ� ����!!!! \n");
		break;
	}
}
