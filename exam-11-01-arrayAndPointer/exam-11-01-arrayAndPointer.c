/*
 �����Ϳ� �迭�� ����
	�迭�� �̸��� ������ ���� ������ �Ѵ�.
	���� �޸� �ּ� Ȯ�� ����.
	�� �� ������ �Ұ��� ���(Constant) �̴�.

*/



#include<stdio.h>

int main(void)
{
	int myArr[3] = { 1,2,3 };
	printf("�迭 �� ����� �ּ� Ȯ��\n");
	printf("�迭�� �̸� : %p\n", myArr);
	printf("ù��° ��� : %p\n", &myArr[0]);
	printf("�ι�° ��� : %p\n", &myArr[1]);
	printf("����° ��� : %p\n", &myArr[2]);

	printf("�迭�� �̸� : %d\n", sizeof(myArr));
	printf("ù��° ��� : %d\n", sizeof(& myArr[0]));


	return 0;
}