#include<stdio.h>

int add(int a, int b);

int main(void)
{
	int result;

	result = add(3, 9);
	printf("�Լ��� ��ȯ�� �� : %d\n", result);

	return 0;
}
// add �Լ��� ���(���Ǻ�)
int add(int a, int b)
{
	return a + b;
}