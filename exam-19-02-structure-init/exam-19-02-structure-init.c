/*
 ����ü �ʱ�ȭ
*/

#include<stdio.h>
#include<string.h>

struct  person
{
	char name[30];
	int age;
};

int main(void)
{
	// ����ü ���� ����� ���ÿ� �ʱ�ȭ!
	struct person boy = {"��ҳ�",12};
	struct person girl = {"�̼ҳ�",9};

	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);

	return 0;
	
}