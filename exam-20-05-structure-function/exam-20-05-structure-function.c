/*
 ����ü �Լ�
	����ü ������ �Լ��� ���ڷ� ����,
	�� �Լ��κ��� ��ȯ�� �� �ִ�.
*/
#include<stdio.h>

typedef struct
{
	int s_id;
	int age;
}Student;

// ���� �� �ʱ�ȭ�� ��ģ ����ü ������ ��ȯ�ϴ� �Լ�
Student setStudent(int s_id, int age)
{
	Student s = { s_id, age };

	return s;
}

// ����ü�� ���޹޾� ��� ������ ����ϴ� �Լ�
void printStudent(Student s)
{
	printf("�й� : %d, ���� : %d\n", s.s_id, s.age);
}

int main(void)
{
	Student s = setStudent(20221206, 20); // ��ȯ�� ����ü ������ ����
	printStudent(s); // ����ü ������ ���ڷ� ����

	return 0;
}