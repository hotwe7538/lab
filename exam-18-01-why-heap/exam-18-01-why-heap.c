#include<stdio.h>

// ��ȯ Ÿ���� char �����ͺ���
char* getString(void)
{
	char str[100];
	printf("�����ϴ� �ܾ�� ?");
	gets(str); // ���ڿ� �Է��Լ� scanf ���

	return str;
}

int main(void)
{
	char* result = getString();
	printf("����� �����ϴ� �ܾ�� : %s\n", result);

	return 0;
}