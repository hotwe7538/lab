/*
 ����!!!
 1. �ָ����� 2��for�� �ڵ� �м��ϱ�

2��
    *
   **
  ***
 ****
3��
   *
  ***
 *****
*******
4��
0    *
1   ***
2  *****
3 *******
4  *****
5   ***
6    *
5��

   ��
   *
  ***
 *****
*******
  | |
  | | Merry Christmas ~*

*/

#include<stdio.h>
int main(void)
{

	int i, j;

	for (i = 0; i < 7; i++)
	{
		
		for (j = 0; j < 7; j++)
		{
			if (i < 4) {
				if (j + i < 7 / 2)
				{
					printf(" ");
				}
				else if (j - i > 7 / 2)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
		}
		/*else*/
		{

			if (i - j > 3)
			{
				printf(" ");
			}
			else if (i + j > 9)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}

		}
	}
		printf("\n");
	}








	//for (i = 0; i < 7; i++) // ��(��)
	//{
	//	printf("%d :", i);
	//	for (j = 0; j <= i; j++) // ��(ĭ)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//	
	//}
	
