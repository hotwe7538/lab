/*
 ������
	�޸��� �ּҰ��� �ǹ��ϸ� �ּҰ��� �����ϴ� ������ ������
	'������ ����'��� �Ѵ�.
*/

#include<stdio.h>

int main(void)
{
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	// ������ * ������ ����, ����&�����ڷ� �������� �����ͺ��� ����.
	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	// ������ ������ ��¿��� ���Ĺ��� %p�� ����� �� �ִ�.
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	int num = 10;
	int* pnum;
	pnum = &num; // ������ ���� pnum�� num�� �ּҸ� ������

	printf("%d\n", *pnum);

	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	
	return 0;
}