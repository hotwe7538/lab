/*
���ϸ� : exam-15-05-local

 ��������
	Ư������({}�ڵ��) �������� ��밡���� ����
	�Ű������� ���������� �����̴�.

*/
#include<stdio.h>

int localFunc(int num)
{
	int result = 0;
	return result + num;
}
int main(void)
{
	int num = 5;
	int result = localFunc(num);

	printf("��� : %d\n", result);

	return 0;
}