#include<stdio.h>

// count�� ���� ������ ���� �Ű�����
int sayHello(int count)
{
	printf("Hello~!\n");

	// count�� 3�� �Ǹ� ���̻� ���ȣ���� ���� �ʴ´�.
	if (count != 3) {
		sayHello(count + 1);
	}
}

int main(void)
{
	// ���ȣ�� �Լ� ȣ��
	sayHello(1);

	return 0;
}