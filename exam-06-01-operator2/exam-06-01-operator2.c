/*
4. �� ������
   && (AND) : �ǿ����ڰ� ��� ���̸� ��
   || (OR) : �ǿ����� �� ���� ������ ��
   ! (NOT) : �ǿ����ڰ� ���̸� ����, �����̸� ��(����)
5. ���� ���� ������
   ���� ? ���ϰ�� ��� : �����ϰ�� ���

6. ��Ʈ ���� ������
   &  : ������ �Ǵ� ��Ʈ�� ��� 1�̸� 1�� ��ȯ��. (��Ʈ AND ����)
   |  : ������ �Ǵ� ��Ʈ �߿��� �ϳ��� 1�̸� 1�� ��ȯ�� (��Ʈ  OR ����)
   ^  : ������ �Ǵ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ��. (��Ʈ XOR ����)
   ~  : ��Ʈ�� 1�̸� 0����, 0�̸� 1�� ������Ŵ. (��Ʈ NOT ����)
7. ����Ʈ ������
   << ������ ����ŭ ��Ʈ���� ���� �������� �̵���Ŵ. (left shift ����)
   >> ��ȣ�� �����ϸ鼭 ������ ����ŭ ��Ʈ�� ���� ���������� �̵���Ŵ. (right shift ����)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// �� ������
	printf("�� ������ \n");
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("1) result : %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("2) result : %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("3) result : %d\n", result);

	printf("\n");

	// ���� ������
	printf("���� ������ \n");

	int num, absolute;

	printf("���� �Է� : ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("���밪 : %d\n", absolute);

	// ��Ʈ ������
	int a = 3; // 0000 0011
	int b = 5; // 0000 0101

	printf("3 & 5 = %d\n", a & b);
	printf("3 | 5 = %d\n", a | b);
	printf("3 ^ 5 = %d\n", a ^ b);
	printf("~3 = %d\n", ~a );

	// ����Ʈ ������
	int x, y;
	x = 1;
	y = x << 2; //�������� �� ĭ �̵�
	printf("%d << 2 = %d\n", x, y);
	y = x >> 2; //���������� �� ĭ �̵�
	printf("%d >> 2 = %d\n", x, y);

	return 0;
}