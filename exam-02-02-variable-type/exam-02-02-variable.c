/*
c��� �⺻ �ڷ��� ����

   ������ �ڷ��� - char
   ������ �ڷ��� - short, int, long, long long
   �Ǽ��� �ڷ��� - float, double, long double

   char			1����Ʈ       -128 ~ +127
   short		2����Ʈ       -32,768 ~ +32,767
   int			4����Ʈ       -2,147,483,648 ~ +2,147,483,647
   long			4����Ʈ		  -2,147,483,648 ~ +2,147,483,647
   long long	8����Ʈ       -9,223,372,036,854,775,808
								~ +9,223,372,036,854,775,807
   float        4����Ʈ       ��3.4x10^-37 ~ �� ��3.4x10^+38
   double		8����Ʈ       ��1.7x10^-307 ~ ��1.7x10^+308
   long double  8����Ʈ �̻�  double �̻��� ǥ�� ����

   
*/

#include <stdio.h>

int main(void) {

	//���� �Ǿ� ���� ���� ���� ó���� �� �����Ϸ���
	printf("sizeof(100) : %d\n", sizeof(100));
	printf("sizeof(3.14) : %d\n", sizeof(3.14));

	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	// �ƽ�Ű�ڵ� ���ڰ����� ���
	printf("%c\n", ch1);
	printf("%d\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
	
}