/*
 3. for ��

 for(���� �ʱ�ȭ; ���ǽ�; ������)
 {
	�ݺ� ������ �ڵ�
 }

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	/*
	int i;
	for (i = 0; i < 3; i += 1)
	{
		printf("i is %d now\n", i);
	}

	int j = 0; // ����->1
	while (j < 3) // 2
	{
		printf("j is %d now\n", j); // 3
		j += 1; // 4
	}

	*/

	int num = 0;
	for (; num != -1;)
	{
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
		if (num == -1)
			printf("�����մϴ�.");
		else
			printf("%d��(��) �Է��ϼ̳׿�.\n", num);
	}
}