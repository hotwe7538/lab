/*
 ������ ǥ�����
   ����ǥ��
     ��ǻ�ʹ� 2������ ǥ��(bit)
     ��ȣ��Ʈ(MSB) + ��ġ��Ʈ
     ���ǰ��� ǥ���� �� 2�� ����ǥ��

   �Ǽ�ǥ��
      �����κ�Ʈ + ����κ�Ʈ
   �Ǽ�ǥ�� ����
     ��(1.m)*2^(e-127)
   �ε��Ҽ�������
     ��Ȯ�� �Ǽ�ǥ�� �Ұ��� �ٻ�ġ ������ ���� ���� ����
   
   ! �˻��ϱ� : �ε��Ҽ��� ���� ����ó�����

   unsigned �ڷ���


*/
#include <stdio.h>
int main(void)
{
    float err_num = 0;
    for (int i = 0; i < 100; i++)
    {
        err_num += 0.1; // err_num = err_num + 0.1;
    }
    printf("%f\n", err_num);

    /*
    unsigned �ڷ���
        ��ȣ���� ������
        0�̻� ǥ��
        �������� ��� ���ǥ������ Ŀ����.
    */

    char cnum = 128; // char ���� �ִ밪�� 127�Դϴ�. 
    unsigned char u_cnum = 128;
    short snum = 32768; // short ���� �ִ밪�� 32768�Դϴ�.
    unsigned short u_snum = 32768;

    printf("%d\n", cnum);
    printf("%d\n", u_cnum);
    printf("%d\n", snum);
    printf("%d\n", u_snum);
}