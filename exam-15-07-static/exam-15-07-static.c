/*
 static ���� (��������)
	�Լ�����(����), �Լ��ܺ�(����)������ ��밡��
	���α׷��� ���۵� �� �Ҵ�ǰ� ���α׷��� ������ �Ҹ�ȴ�.

*/
#include<stdio.h>

void increaseNumber()
{
	static int number = 0; // static �������� number ����

	number++;
	printf("number : %d \n", number);
}

int main(void)
{
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}