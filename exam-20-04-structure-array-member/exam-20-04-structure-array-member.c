/*
 ����ü �迭 �������
*/

#include<stdio.h>

typedef struct
{
	char title[100];
	int published;
}Book;

typedef struct
{
	Book books[3]; // ����� ���� ���� 3�� ����ü �迭 ����
}Bag;

int main(void)
{
	// ����� ���ÿ� �ʱ�ȭ
	Bag myBag = { // Bag ����ü ��
		{// Book �迭 �� 
			
			// Book ����ü��
			{"���� ���� ������ ���� �ϰڴ°�", 2018},
			{"Ÿ��ź�� ������", 2017},
			{"12���� �λ��� ��Ģ", 2018}
		}

	};

	int i;

	// ���� ��ҿ� ���� ������ ����
	for (i = 0; i < 3; i++)
	{
		printf("å ���� : %s \n�Ⱓ�⵵ : %d��\n",
			myBag.books[i].title, myBag.books[i].published); // ���� ��Ҵ� ��� ����ü ����
			
	}
	return 0;
}