/*
scanf()
   ������ �Է¿� ���Ǵ� �Լ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	/*char character;
	int inum;
	float fnum;

	scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	printf("%c, %d, %f \n", character, inum, fnum);*/

	int num1, num2, num3;
	float fnum1, fnum2;

	/*printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d %d %d \n", num1, num2, num3);

	printf("�Ǽ�, ����, �Ǽ� ���ʴ�� �Է� : ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ���� : %f %d %f \n", fnum1, num1, fnum2);*/

	printf(" �� ���� ���� �Է� : ");
	// ������� 8����, 16����, 10���� �Է�
	scanf("%o %x %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d %d %d \n", num1, num2, num3);
}