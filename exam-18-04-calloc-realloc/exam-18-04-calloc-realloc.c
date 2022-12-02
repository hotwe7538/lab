/*
 calloc �Լ�
	�޸� ���������� �޸𸮰���ũ�� ���ڸ� �Ҵ�޴´�.
	malloc �Լ��� ������ ����

 realloc �Լ�
	�������� �Ҵ�Ǿ� �ִ� �޸� ������ ũ������ ����� ���� �Լ�

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int* ptr; // �Ҵ�� �޸��� �ּ� ���� ������ ������
	int count = 0; // ������ �Է� ���� ����
	int maxSize = 3; // �Ҵ���� �޸� ũ��
	int num;
	int i;

	ptr = (int*)calloc(maxSize, sizeof(int)); // = malloc(sizeof(int * maxSize);
	while (1)
	{
		printf("������ �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
		if (num == -1)
		{
			break;
		}
		// �Է��� ������ ������ �޸� ũ�⸸ŭ á�� ���
		if (count == maxSize)
		{
			maxSize += maxSize;
			// ���Ҵ��� ���� �޸� ���� Ȯ��
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		ptr[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%d  ", ptr[i]);
	}
	printf("\n");
	
	// if (ptr != NULL) free(ptr);
	if (ptr != NULL)
	{ 
		free(ptr);

	}
		
}