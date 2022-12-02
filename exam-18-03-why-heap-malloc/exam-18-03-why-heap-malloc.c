/*
 malloc �Լ��� ����Ͽ� �������� ���� �ذ�!
*/

#include<stdio.h>
#include<stdlib.h>

// ��ȯ Ÿ���� char �����ͺ���
char* getString(void)
{
	/*
		�������� char str[100]; ��
		malloc �Լ��� �̿��� Heap ���� �޸� �����Ҵ�
	*/
	char* str = (char*)malloc(sizeof(char) * 100); 
	printf("�����ϴ� �ܾ�� ?");
	gets(str); // ���ڿ� �Է��Լ� scanf ���

	return str;
}

int main(void)
{
	char* result = getString();
	printf("����� �����ϴ� �ܾ�� : %s\n", result);

	if (result != NULL) free(result);
	return 0;
}