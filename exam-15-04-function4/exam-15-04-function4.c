#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Է°��� ��ȯ���� ��� ���� �Լ�
void guide(void)
{
	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}
// �Է°��� �����ϴ� ���
void printNumber(int num)
{
	printf("����� �Է��� ������ %d�Դϴ�.\n", num);
}

// ��ȯ���� �����ϴ� �Լ�
int inputNumber(void)
{
	int num;
	printf("������ �Է��� �ּ���: ");
	scanf("%d", &num);

	return num;
}

int main(void)
{
	guide();
	int num = inputNumber(); // ��ȯ���� ������ �� �ִ�. // ������ �� �Է�
	printNumber(num); // ������ �� �Է�

	return 0;
}