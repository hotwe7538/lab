/*
 ���ڿ�
	c���� ���ڿ��� ū����ǥ(")�� �̿��ؼ� ǥ��
	���ڿ��� ����(char)�� �̷���� �迭
	���ڿ� ���� ��(Null) ���ڷ� ǥ��


*/

#include<stdio.h>

int main(void)
{
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("1-1 : %s \n", good);
	printf("1-2 : %s \n", bad);
	printf("1 : %p %p \n", good, bad);

	// �迭 ����� ���ڿ� ����
	good[0] = 'H'; // �� ���� ����
	// good = "New Good"; // �Ұ���(�迭�̸��� �������)

	// ������ ����� ���ڿ� ����
	//bad[0] = 'S'; // �� ���� �Ұ���
	bad = "New Bad"; // ����

	printf("2-1 : %s \n", good);
	printf("2-2 : %s \n", bad);
	printf("2 : %p %p \n", good, bad);

	return 0;


}