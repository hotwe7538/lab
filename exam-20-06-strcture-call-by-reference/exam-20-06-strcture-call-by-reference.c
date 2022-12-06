/*
 ����ü Call by reference
*/
#include<stdio.h>
typedef struct
{
	int xpos;
	int ypos;
}Point;

void setPosSameValue(Point* ptr)
{
	printf("setPosSameValue : %p\n", &ptr);
	if (ptr->xpos > ptr->ypos)
	{
		ptr->ypos = ptr->xpos;
	}
	else
	{
		ptr->xpos = ptr->ypos;
	}
}

void printPoint(Point point)
{
	printf("printPoint : %p\n", &point);
	printf("x : %d, y : %d\n", point.xpos, point.ypos);
}

int main(void)
{
	Point position1 = { 33, 66 };
	Point position2 = { 6, 3 };

	printf("main posititon1 :  %p\n", &position1);
	printf("main posititon2 :  %p\n", &position2);

	// �ּ� ���� ����!
	setPosSameValue(&position1);
	setPosSameValue(&position2);

	// �� ����Ʈ�� ���
	printPoint(position1);
	printPoint(position2);

	return 0;
}