/*
�迭
   �ټ��� �����͸� �����ϰ� ó���ϱ� ���� ����ϴ� ������ ǥ�� ���.
   ���� ���� �����͸� �ϳ��� �������� ������ �� �ִ� ������ ����.
   ���� ������ ���� �� �ִ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	// ���� ������ ���Ե� �迭 ���� �� �ʱ�ȭ
	int numbers[3] = { 1, 2, 3 };

	// ���� ������ ���Ե������� �迭�� ���� �� �ʱ�ȭ
	char characters[] = { 'a','b','c','d','e' };

	int odd[3]; // �ʱ�ȭ ���� ���� �迭

	// �迭�� ���� ��� �ʱ�ȭ
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	// ���� ��� ���� �� ���
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	int i;
	// for���� ���� �迭 ��� ���
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", odd[i]);
	}

	// ���� �������� �Ѱ� �� ���� 13 ���
	// �̴� �����ƴ� �������� '\0' �̶�� ���ڸ� �����ϱ� �����̴�.
	// '\0' ���ڸ� ������ '��(Null) ����' ��� �Ѵ�.
	char greet[] = "Hello, Guys!";
	printf("1���� �迭 greet�� ���̴� : %d\n", sizeof(greet));

	char mind[30] = "I Love Programming!";
	printf("%s\n", mind);

	mind[7] = '\0'; // 8��° ��ҷ� null ���� ���� 
	printf("%s\n", mind);

	mind[1] = '\0'; // 2��° ��ҷ� null ���� ���� 
	printf("%s\n", mind);

	char str[50];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printf("�Էµ� ���ڿ� : %s\n", str);


	return 0;
}