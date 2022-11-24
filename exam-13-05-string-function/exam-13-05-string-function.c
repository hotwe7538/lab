/*
 ���ڿ� ó���Լ�
	1. strlen
		���ڿ� ����
	2. strcpy
		���ڿ� ����
	3. strncpy
		���ϴ� ������ŭ ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];

	// �� ���ڿ��� ���� ���
	printf("str1�� ����: %d, str2�� ����: %d\n", strlen(str1), strlen(str2));
	printf("str1�� ����: %d, str2�� ����: %d\n", sizeof(str1), sizeof(str2));

	// str1�� ���� ��ü�� str3�� ����(����)�ϱ�
	strcpy(str3, str1);

	// str1�� ���� �Ϻθ� str2�� ����(����)�ϱ�
	strncpy(str2, str1, 2);

	printf("%s\n%s\n%s\n", str1, str2, str3);


	return 0;
}