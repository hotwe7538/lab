/*
 ������ 

 1. ���������
	+, -, *, /, %
 2. ���� ������
    =, +=, -=, *=, /=, %=
	: ������ �����ʿ� �ִ� ���� ������ ���ʿ� �ִ� ������ ����.
 3. �� ������
	> : ũ��
	>= : ũ�ų� ����
	< : �۴�
	<= : �۰ų� ����
	== : ����
	!= : �ٸ���

 ** ������ �켱����
         1) ++, --
		 2) +, - ��ȣ������(���,����)
		 3) *, /, %
		 4) +, - ����, ����
		 5) <, >, <=, >=
		 6) ==, !=
		 7) =, +=, -=, *=, /=, %=
*/

#include<stdio.h>
int main(void)
{
	printf("��� ������ \n");
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("\n");

	// ���Կ�����
	printf("���� ������ \n");
	int num3 = 3, num4 = 4;
	num3 += 3; // num3 = num3 + 3;
	num4 *= 4; // num4 = num4 * 4;
	printf("num3 += 3 �� ��� : %d\n", num3);
	printf("num4 *= 4 �� ��� : %d\n", num4);
	
	printf("\n");

	// �񱳿�����
	printf("�� ������ \n");
	int a = 10, b = 11;
	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);
	
}