/*
 ����ü�� typedef
	����ü �̸��� typedef ���� ����� �� �� �ִ�.
*/

#include<stdio.h>

// ����ü ����� ���ÿ� typedef ����
typedef struct
{
	int x; int y;
}POINT;

struct  person
{
	char name[30];
	int age;
};

// ���ǵ� ����ü�� ���� typedef ����
typedef struct person PERSON;

int main(void)
{
	POINT position = { 30, 60 }; // struct person position = {30, 60};
	PERSON saram = { "����", 10 };

	printf("%d %d\n", position.x, position.y);
	printf("%s %d\n", saram.name, saram.age);

	return 0;
}