/*
 ����ü �����ͺ���
	����ü�� �����ͺ����� ����
	�Ϲ������ͺ����� ũ�� ���̰� ����.
*/
#include<stdio.h>

typedef struct
{
	char name[30];
	int age;
}Person;

int main(void)
{
	Person boy = { "�ѹݵ�", 38};
	Person* ptr = &boy; // Person�� ������ ������ ����ü ���� boy�� �����Ѵ�.

	// �Ʒ� �� �ڵ�� ������ ����� ����Ѵ�(��ȣ�� �ٸ� ��, ������ ����)
	printf("%s (%d)\n", (*ptr).name, (*ptr).age);
	printf("%s (%d)\n", ptr->name, ptr->age);

	return 0;
}