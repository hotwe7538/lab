/*
printf() �Լ�
  �ܼ� ȭ��� ���ڿ� ����Լ�

�����
   \t ��(tab)
   \n �ٹٲ�
   \b �� ĭ �������� �̵�
   \r �� ������ �̵�
   \a �����
   \' ��������ǥ
   \" ū����ǥ
   \? ����ǥ
   \\ �齽����

���Ĺ���
  %d : ��ȣ�ִ� 10����
  %u : ��ȣ���� 10����
  %o : ��ȣ���� 8����
  %x : ��ȣ���� 16����
  %f : 10���� ����� �ε��Ҽ��� �Ǽ�
  %e : ���� ����� �ε��Ҽ��� �Ǽ�
  %g : ���� ���� %f�� %e �� ����
  %c : ���� �����ϴ� ����
  %s : ���ڿ�
  %p : ������ �ּҰ�
  %% : %�� ��� ���ڷ�
*/

#include<stdio.h>

int main(void)
{
	//�ֿܼ� ����ϱ�
	printf("I Love C language!\n");
	printf("It is so funny!\n");

	/*
	�̽������� ������ \ ��ȣ�� 
	�۲ÿ� ���� ��(������ 3��) ��ȣ�� ��ü �����մϴ�.
	*/
	printf("I am a boy. \"\n");
	printf("I am a \'boy\'. \n");
	printf("I \tam \ta \tboy. \n");
	printf("I \bam a boy. \n");
	printf("I am a boy.\\\?\n");

	char character = 'X';
	int inumber = 92;
	double dnumber = 20.201005;
	printf("%c\n", character);
	printf("%d\n", character);
	printf("%d\n", inumber);
	printf("%x\n", inumber);
	printf("%o\n", inumber);
	printf("%f\n", dnumber);
	printf("%e\n", dnumber);

	char character2 = 'H';
	int num = 548;
	printf("%5c\n", character2);
	printf("%-5c\n", character2);
	printf("%10d\n", num);
	printf("%-10d\n", num);

	float fnum = 1.234567;
	printf("%10f\n", fnum);
	printf("%-10f\n", fnum);
	printf("%10.3f\n", fnum);
	printf("%-10.3f\n", fnum);
	
}