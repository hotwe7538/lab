/*
	4. strcat(str1, str2)
		���ڿ� �̾� ���̱�
	5. strncat(str1, str2, count)
		���ϴ� ������ŭ ���ڿ� �̾���̱�
	6. strcmp(str1, str2)
		�� ���ڿ� �� ������ 0, ���� ������ 0�� �ƴ� �� ��ȯ
	7. strcmp(str1, str2, count)
		count�� �� ���ڿ� �� ������ 0, ���� ������ 0�� �ƴ� �� ��ȯ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[50] = "Michael ";
	char str2[50] = "Michael ";

	// strcat ���ڿ� ���̱�
	strcat(str1, "Bolton");
	puts(str1);

	// str2 �� 7���� ���� ���̱�
	strncat(str2, "Jackson Five", 7);
	puts(str2);

	// str1 �� str2 ��
	printf("�� ��� : %d\n", strcmp(str1, str2));

	// str1 �� str2 �� ���� 7�� ���ڸ� ��
	printf("�� ��� : %d\n", strncmp(str1, str2, 7));

	return 0;
}